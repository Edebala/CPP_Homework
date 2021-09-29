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

int main()
{
	double a[7] = {16,23,12,22,12,13,23};	
	cout<<mean(a,7)<< endl;
	cout<<mean(a,0)<< endl;
}
