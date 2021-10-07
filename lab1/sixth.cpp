#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	double sum = 0;
	for(int i=1;i<argc;i++)
	{
		double number;
		istringstream ss(argv[i]);
		if(ss >> number)
			sum+=number;
	}
		cout<<sum<<endl;
		return sum;
}
