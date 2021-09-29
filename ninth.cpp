#include <iostream>
#include <string>

using namespace std;

string capitalizeWords(string text){
	bool lastWasSpace = true;
	for(int i=0;i<text.length();i++)
	{
		if(lastWasSpace && text[i]>='a' && text[i]<='z')
			text[i]+='A'-'a';
		if((!lastWasSpace) && text[i]>='A' && text[i]<='Z')
			text[i]-='A'-'a';
		lastWasSpace = (text[i]==' ');
	}
	return text;
}

int main()
{
	char buffer[150];
	while(1){
		cin.getline(buffer,150);
		cout<<capitalizeWords(string(buffer))<<endl;
	}
}
