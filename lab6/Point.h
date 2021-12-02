using namespace std;

class Point{
private:
int x, y;
static int counter;
public:
Point( int x=0, int y=0);
int getX() const;
int getY() const;
double distanceTo(const Point& point) const;
Point(const Point&);
Point(const Point&&) =  default;
~Point();
static int getCounter();
};
