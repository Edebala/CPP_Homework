#include <iostream>

int countBits(int arg)
{
	int nr = 0;
	for(;arg>0;arg>>=1)
		nr += arg&1;
	return nr;
}

int main()
{
	for(int i=0;i<=127;i++)
		std::cout<<countBits(i)<<", ";
}
