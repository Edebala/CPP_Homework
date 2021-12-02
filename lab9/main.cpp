#include <iostream>

using namespace std;

bool contains(vector <string> strings, string term){
	find_if(strings.begin(),strings.end(),[term](string s){
		return s.find(term)
	});
}


int main(){
	vector<string> fruits {
		"melon", "strawberry", "raspberry","apple", "banana", "walnut", "lemon"
	};
}
