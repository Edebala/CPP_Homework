#include <cmath>
#include "Point.h"

int Point::counter{0};

Point::Point(int x,int y):x(x),y(y){counter++;}

int Point::getX()const{return x;}

int Point::getY()const{return y;}

double Point::distanceTo(const Point& p) const
	{return sqrt(pow(p.x-x,2)+pow(p.y-y,2));}

Point::Point(const Point& p){
	x = p.x;
	y = p.y;
	counter++;
}

int Point::getCounter(){return counter;}

Point::~Point(){counter--;}

