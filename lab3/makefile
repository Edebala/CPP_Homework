install: Stack.o main.cpp
	g++ main.cpp Stack.o List.o 

Stack.o: List.o Stack.cpp Stack.h
	g++ Stack.cpp -c

List.o: List.cpp List.h
	g++ List.cpp -c
