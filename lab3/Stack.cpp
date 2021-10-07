#include "Stack.h"

void Stack::push(int e){
	elements.insertFirst(e);
}

int Stack::pop(){
	return elements.removeFirst();
}

bool Stack::isEmpty() const{
	return elements.empty();
}
