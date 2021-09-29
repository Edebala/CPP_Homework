#include <iostream>
#include <cmath>

using namespace std;

double mean(double array[], int numElements)
{
	double avg = 0;
	if(numElements<0) return NAN;
	for(int i=0;i<numElements;i++){
		avg += array[i]/numElements;
	}
	return avg;
}

double stddev(double array[], int numElements)
{
	double dev =0;
	if(numElements<0) return NAN;
	double mn = mean(array,numElements);
	for(int i=0;i<numElements;i++)
		dev += pow(array[i]-mn,2);
	return dev = sqrt(dev/numElements);
}

int main()
{
	double a[7] = {1,2,3,4,5,6,7};	
	cout<<mean(a,7)<< endl;
	cout<<stddev(a,7)<< endl;
}
