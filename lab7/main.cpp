#include "Account.h"
	int Account::counter = 0;

int main(){
	Account *a = new Account(0);
	cout<<*a<<endl;
	a->deposit(1000);
	cout<<*a<<endl;
	a->withdraw(500);
	cout<<*a<<endl;
	a->withdraw(1000);
	cout<<*a<<endl;
	return 0;
}
