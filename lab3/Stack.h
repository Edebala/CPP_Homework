#ifndef STACK_H
#define STACK_H
#include "List.h"

class Stack{
private:
	List elements;
public:
	Stack(){}
	~Stack();
	void push(int e);
	int pop();
	bool isEmpty() const;
};
#endif
