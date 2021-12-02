#include "Account.h"

Account::Account(double balance):balance(balance){
	id = counter++;
}

void Account::deposit(double a){
	if(a>0)
		balance+=a;
}

bool Account::withdraw(double a){
	if(a>0 && a<=balance)
	{
		balance-=a;
		return true;
	}
	return false;
}

double Account::getBalance() const{return balance;}

void Account::print(ostream& os) const{
	os<<id<<':'<<balance<<endl;
}

ostream& operator<<(ostream& os, const Account& account){
	os <<account.id<<':'<<account.balance;
	return os;
} 
