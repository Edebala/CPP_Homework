#include "List.h"
#include <iostream>

List::List(){
	nodeCounter = 0;
	first = NULL;
}

List::~List(){
	while(first != NULL){
		removeFirst();
	}
}

bool List::exists(int d) const
{
	auto p = first;
	while(p!=NULL){
		if(p->value == d)return true;
		p=p->next;
	}
	return false;
}

int List::size() const{
	return nodeCounter;
}

bool List::empty() const{
	return (first == NULL);
}

void List::insertFirst(int d){
	auto p = new Node(d,first);
	first = p;
}

int List::removeFirst(){
	if(first == NULL) return 0;
	auto p = first->next;
	auto n = first->value;
	delete first;
	first = p;
	return n;
}

void List::remove(int d, List::DeleteFlag df){
	auto p = first;
	if((p->value == d && df == DeleteFlag::EQUAL) ||
		(p->value  < d && df == DeleteFlag::LESS) ||
		(p->value  > d && df == DeleteFlag::GREATER))
	{
		removeFirst();
		return;
	}
	while(p->next!=NULL){
		if((p->next->value == d && df == DeleteFlag::EQUAL) ||
			(p->next->value  < d && df == DeleteFlag::LESS) ||
			(p->next->value  > d && df == DeleteFlag::GREATER))
		{
			auto q = p->next;
			p->next = p->next->next;
			delete q;
			return;
		}
		p=p->next;
	}
}

void List::print() const{
	auto p = first;
	while(p!=NULL){
		std::cout<<p->value<<'\t';
		p=p->next;
	}
	std::cout<<std::endl;
}
