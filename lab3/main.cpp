#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
	Stack s;
	for(int i=0;i<17;i++)
		s.push(i);
	for(int i=0;i<17;i++)
		cout<<s.pop()<<endl;
}
