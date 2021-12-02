#include <cmath>
#include "Point.h"

int Point::getX()const{return x;}
int Point::getY()const{return y;}
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}
double Point::distanceTo(const Point& p) const{
	return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
}
