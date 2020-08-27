WORD= g++ -Wall

all: wordSummer1

clean: 
	rm -f wordSummer* *.o

wordSummer1: summer1.cpp $(REQUIRED)
	$(WORD) -o wordSummer1 summer1.cpp
