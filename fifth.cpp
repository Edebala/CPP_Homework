#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

pair<double,double> max2(double array[], int numElements)
{
	pair<double,double>p = {NAN,NAN};
	if(numElements == 0) return p;
	p.first = array[0];
	p.second = array[0];
	for(int i=1;i<numElements;i++)
	{
		if(p.second == NAN || array[i]> p.second)
		{
			p.second = array[i];
			if(p.first<p.second){
				double s = p.first;
				p.first = p.second;
				p.second = s;
			}
		}
	}
	return p;
}

int main()
{
	double a[7] = {1,2,3,4,5,6,7};	
	cout<<max2(a,7).first<< endl;
	cout<<max2(a,7).second<< endl;
}
