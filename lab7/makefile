build: Account.o main.cpp Customer.o Bank.o
	g++ main.cpp -o run Account.o Customer.o Bank.o

Account.o: Account.cpp Account.h
	g++ Account.cpp -c

Customer.o: Customer.cpp Customer.h
	g++ Customer.cpp -c

Bank.o: Bank.cpp Bank.h
	g++ Bank.cpp -c

clean:
	rm *.o run
