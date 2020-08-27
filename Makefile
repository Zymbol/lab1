WORD= g++ -Wall

all: lab1

clean: 
	rm -f lab1 *.o

lab1: lab1.cpp $(REQUIRED)
	$(WORD) -o lab1 lab1.cpp
