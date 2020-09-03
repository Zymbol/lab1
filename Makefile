all: lab1 lab1_test

lab1: lab1.cpp
	g++ -Wall lab1.cpp -o lab1

lab1_test:
	g++ -Wall lab1.cpp -o lab1_test -D UNIT_TEST

clean:
	rm -f lab1 lab1_test *.o
