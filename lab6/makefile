build: main.cpp PointSet.o Point.o Point.h PointSet.h Polynomial.o
	g++ main.cpp -o run Point.o PointSet.o Polynomial.o

Point.o: Point.cpp Point.h
	g++ Point.cpp -c

PointSet.o: PointSet.cpp PointSet.h
	g++ PointSet.cpp -c

clean:
	rm *.o run

Polynomial.o: Polynomial.cpp Polynomial.h
	g++ Polynomial.cpp -c
