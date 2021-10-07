#include <iostream>
#include <string>

using namespace std;


string code(string text){
	for(int i=0;i<text.length();i++)
	{
		if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z'))
			text[i]++;
		if(text[i]=='z'+1 || text[i]=='Z'+1)text[i]-=('Z'-'A'+1);
	}
	return text;
}

string decode(string text){
	for(int i=0;i<text.length();i++)
	{
		if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z'))
			text[i]--;
		if(text[i]=='a'-1 || text[i]=='A'-1)text[i]+=('Z'-'A'+1);
	}
	return text;
}

int main(){
	cout<<code("z a")<<endl;
	cout<<decode(code("z a"))<<endl;
}
