#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string text){
	string buffer;
	int sum =0;
	stringstream ss(text);
	while(ss>>buffer){
		sum++;
	}
	return sum;
}

int main(){
	cout << countWords("This is an example Text woow   ")<<endl;
	return 0;
}
