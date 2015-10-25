all: Story.o Driver.o
	g++ -g -Wall -std=c++11 -o test Story.o Driver.o

Story.o: Story.cpp
	g++ -g -Wall -std=c++11 -c Story.cpp

Driver.o : Driver.cpp
	g++ -g -Wall -std=c++11 -c Driver.cpp

clean: 
	rm *.o test
