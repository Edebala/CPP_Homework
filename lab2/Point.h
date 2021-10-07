#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
class Point{
private:
	int x,y;
public:
	Point(int x=0,int y=0);
	int getX() const;
	int getY() const;
	void print() const;
};

double distance(const Point& a,const Point& b);
double distance(const Point& a);
bool isSquare(
	const Point& a,const Point& b,
	const Point& c,const Point& d);
void testIsSquare(const char* filename);
Point* createPoints(int n);
void printPoints(int n, Point* p);
pair<Point, Point> closestPoints(Point* p, int n);
pair<Point, Point> farthestPoints(Point* p, int n);
void sortPoints(Point* points, int numPoints);
Point* farthestPointsFromOrigin(Point* points, int numPoints);
void deletePoints(Point* p);
#endif
