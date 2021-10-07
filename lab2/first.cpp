#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int arraySize = 1000;
	//testIsSquare("points.txt");
	Point *p = createPoints(arraySize);
	printPoints(arraySize,p);
	pair<Point,Point> pair = closestPoints(p,arraySize);
	cout<<"--------------"<<endl;
	pair.first.print();
	pair.second.print();
	pair = farthestPoints(p,arraySize);
	cout<<"--------------"<<endl;
	pair.first.print();
	pair.second.print();
	cout<<"--------------"<<endl;
	sortPoints(p,arraySize);
	printPoints(arraySize,p);
	cout<<"--------------"<<endl;
	Point* fpo = farthestPointsFromOrigin(p,arraySize);
	printPoints(10,fpo);
	deletePoints(p);
	deletePoints(fpo);
}
