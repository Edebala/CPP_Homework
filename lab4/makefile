build: Point.o PointSet.o main.cpp Point.h PointSet.h
	g++ main.cpp -o run Point.o PointSet.o
PointSet.o: PointSet.cpp Point.o PointSet.h Point.h
	g++ PointSet.cpp -c
Point.o: Point.cpp Point.h
	g++ Point.cpp -c
