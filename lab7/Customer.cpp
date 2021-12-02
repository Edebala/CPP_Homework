#include "Customer.h"

Customer::Customer(const string& fn, const string& ln)
	:firstName{fn},lastName{ln}{};

const string& Customer::getFirstName()const{
	return firstName;
}

const string& Customer::getLastName()const{
	return lastName;
}

void Customer::setLastName(const string &lastName){
	this->lastName = lastName;
}

Account& Customer::getAccount(int id){
	for(Account &a: accounts){
		if(a.getId() == id)return a;
	}
	throw out_of_range("Account not found");
}

int Customer::newAccount(double balance){
	accounts.emplace_back(Account(balance));
	return accounts.back().getId();
}

bool Customer::deleteAccount(int id){
	for(int i=0;i<accounts.size();i++){
		if(accounts[i].getId() == id)
		{
			accounts.erase(accounts.begin()+i);
			return true;
		}
	}
	return false;
}

int Customer::getNumAccounts() const
	{return accounts.size();}

void Customer::print(ostream & os) const
{
	os<<firstName<<" "<<lastName<<":\n";
	for(Account a: accounts){
		os<<a<<endl;
	}
}

ostream& operator<<(ostream& os, const Customer& customer){
	os<<customer.firstName<<" "<<customer.lastName<<":\n";
	for(Account a: customer.accounts){
		os<<a<<endl;
	}
	return os;
}
Account& operator[](int index){

}

const Account& operator[](int index) const{

}
