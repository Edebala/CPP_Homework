#include <ctime>
#include <iostream>
#include "PointSet.h"

PointSet::PointSet(int n){
	srand(time(nullptr));
	uint8_t foglalt[2000][250];
	for(int i=0;i<2000;i++)
		for(int j=0;j<250;j++)
			foglalt[i][j] = (uint8_t)(0);
	this->n = n;
	int rx,ry;
	points.reserve(n);
	for(int i=0;i<n;i++){
		do{
			rx = rand()%2000;
			ry = rand()%2000;
		}while(foglalt[rx][(ry/8)]&(1<ry%8));
			foglalt[rx][(ry/8)] |= (1<ry%8);
		points.emplace_back(Point(rx,ry));
	}
	computeDistances();	
}

void PointSet::computeDistances(){
	distances.reserve(n*(n+1)/2);
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			distances.emplace_back(points[i].distanceTo(points[j]));
}

double PointSet::maxDistance() const{
	double record = 0;
	for(double d:distances)
		if(record<d)record = d;
	return record;
}

double PointSet::minDistance() const{
	double record = 4000;
	for(double d:distances)
		if(record>d)record = d;
	return record;
}

int PointSet::numDistances() const{
	return distances.size();
}

void PointSet::printPoints() const{
	for(Point p:points)
		cout<<p.getX()<<'\t'<<p.getY()<<endl;
	cout<<endl;
}

void PointSet::printDistances() const{
	for(double d:distances)
		cout<<d<<'\t';
	cout<<endl;
}

void PointSet::sortPointsX(){
	sort(points.begin(),points.end(),[](const Point &a,const Point &b) -> bool{
		return a.getX() > b.getX(); });
}

void PointSet::sortPointsY(){
	sort(points.begin(),points.end(),[](const Point &a,const Point &b) -> bool{
		return a.getY() > b.getY();});
}

void PointSet::sortDistances(){
	sort(distances.begin(),distances.end());
}

int PointSet::numDistinctDistances(){
	sortDistances();
	auto it = unique(distances.begin(),distances.end());
	return it-distances.begin();
}
