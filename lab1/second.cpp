#include <iostream>

using namespace std;

bool setBit(int& number, int order){
	if(order <0 || order > 31)return false;
	number|=(1<<order);
	number = number|(1<<order)
	return true;


int main()
{
	for(int i=0; i<35;i++){
		int n=0;
		if(setBit(n,i)){
			cout<<i<<" ---> "<< n << endl;
		}else{
			cout<<"Impossible operation!" << endl;
		}
	}
	return 0;
}
