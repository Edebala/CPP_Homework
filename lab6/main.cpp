#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "PointSet.h"
#define MAX 1000

int main()
{
srand(time(NULL));
int x[100];
int n = 10;
cout<<"x = [";
for( int i=0; i<n; ++i ){
x[i] = rand() % MAX;
cout<<x[i]<<" ";
}
cout << "]" <<endl;
cout << "Legkisebb : " << *min_element(x, x+n) << endl;
vector<int> v;
v.reserve(100);
cout<<"v = [";
for( int i=0; i<n; ++i ){
v.emplace_back( rand() % MAX );
cout<<v[ i]<<" ";
}
cout << "]" <<endl;
cout << "Legnagyobb: " << *max_element(v.begin(),v.end()) << endl;

PointSet pset1(10);
cout<<endl<<"#points: " <<Point::getCounter()<<endl;
PointSet pset2(20);
cout<<"#points: " <<Point::getCounter()<<endl;
return 0;
}
