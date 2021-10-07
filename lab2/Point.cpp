#include "Point.h"

Point::Point(int x,int y){
	if(x >= 0 && x <= 2000 && y >=0 && y<= 2000){
		this->x = x;
		this->y = y;
	}else{
		this->x=0;
		this->y=0;
	}
}

int Point::getX() const{
	return x;
}

int Point::getY() const{
	return y;
}

void Point::print() const{
	cout<<x<<'\t'<<y<<endl;
}

double distance(const Point& a,const Point& b){
	return sqrt(
		pow((double)a.getX()-b.getX(),2.)+
		pow((double)a.getY()-b.getY(),2.));
}
double distance(const Point& a){
	return sqrt(
		pow(a.getX(),2)+ pow(a.getY(),2));
}
bool isSquare(
	const Point& a,const Point& b,const Point& c,const Point& d){
	vector<double> t = {
		distance(a,b),distance(a,c),
		distance(a,d),distance(b,c),
		distance(b,d),distance(c,d)
	};
	sort(t.begin(),t.end());
	return(
	t[0]==t[1]&& t[1]==t[2]&&
	t[2]==t[3]&& t[4]==t[5]&&
	t[3]<t[4]);
}

void testIsSquare(const char* filename){
	ifstream be(filename);	
	int a,b;
	Point v[4];
	if(!be){
		cout<<"Eroare domnule!"<<endl;
		return;
	}
	string line;
	while(getline(be,line)){
		istringstream iss(line);
		for(int i=0;i<4;i++){
			iss>>a>>b;
			v[i] = Point(a,b);
		}
		cout<<isSquare(v[0],v[1],v[2],v[3]);
	}
}

Point* createPoints(int n){
	Point *v = new Point[n];
	for(int i=0;i<n;i++)
		v[i] = Point(rand()%2000,rand()%2000);
	return v;
}

void printPoints(int n, Point* p){
	for(int i=0;i<n;i++)
		p[i].print();
}

pair<Point, Point> closestPoints(Point* p, int n){
	double min = 4000,d;
	pair<Point,Point> pair = {0,0};
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j && (d = distance(p[i],p[j]))<min)
			{
				min = d; 
				pair.first = p[i];
				pair.second = p[j];
			}
	return pair;
}

pair<Point, Point> farthestPoints(Point* p, int n){
	double max = 0,d;
	pair<Point,Point> pair = {0,0};
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j && (d = distance(p[i],p[j]))>max)
			{
				max = d; 
				pair.first = p[i];
				pair.second = p[j];
			}
	return pair;
}

bool cmpPoint(Point a,Point b){
	return (a.getX()<b.getX());
}

void sortPoints(Point* points, int numPoints){
	sort(points,points+numPoints,cmpPoint);
}

Point* farthestPointsFromOrigin(Point* points, int numPoints){
	Point* p= new Point[10];
	for(int i=0;i<10;i++)
		p[i] = Point(0,0);

	for(int i=0;i<numPoints;i++){
		for(int j=0;j<10;j++){
			if(distance(points[i])>distance(p[j])){
				for(int k=9;k>j;k--)
					p[k] = p[k-1];
				p[j] = Point(points[i].getX(),points[i].getY());
				break;
			}
		}
	}
	return p;
}

void deletePoints(Point* p){
	delete []p;
}
