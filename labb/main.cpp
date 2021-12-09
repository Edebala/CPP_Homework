#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	ifstream f("bible.txt");
	int sor=1;
	if(f.is_open()){
		cout<<"Sikeres Filemegnyitas!"<<endl;
	}else{
		cout<<"Kevesbe Fasza!"<<endl;
		return -1;
	}
	vector <string> words;
	vector <vector<int>> pos;
	string cLine;
	string cWord;

	while(getline(f,cLine)){
		if(cLine == ""){
			break;
		}
		stringstream ss(cLine);

		while(ss>>cWord){
			if(cWord.back()== ',' || cWord.back()== '.')
				cWord = cWord.substr(0,cWord.length()-1);
				transform(cWord.begin(),cWord.end(),cWord.begin(),
				[](unsigned char c){return toupper(c);});
			words.emplace_back(cWord);
			pos.emplace_back();
			//cout<<cWord<<' ';
		}
		//cout<<endl;
	}
	while(getline(f,cLine)){
		if(cLine == ""){
			break;
		}
		stringstream ss(cLine);
		while(ss>>cWord){
				transform(cWord.begin(),cWord.end(),cWord.begin(),
				[](unsigned char c){return toupper(c);});
				while(((cWord.back()<'a') || (cWord.back()>'z')) &&
					( (cWord.back()<'A') || (cWord.back()>'Z')))
					cWord = cWord.substr(0,cWord.length()-1);
				auto it = find(words.begin(),words.end(),cWord);
				if(it != words.end())
					if(pos[it-words.begin()].size()==0 ||
						pos[it-words.begin()].back() != sor)
						pos[it-words.begin()].emplace_back(sor);
			//cout<<cWord<<endl;
		}
		sor++;
	}
	for(int i=0;i<words.size();i++){
		cout<< words[i]<<": ";
		for(int j: pos[i]){
			cout<<j<<", ";
		}
		cout<<endl;
	}
	return 0;
}
