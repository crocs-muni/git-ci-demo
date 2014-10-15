FLAGS=-std=c++11 -Wall -Wextra 

all: main testing

test: testing
	./test

main: main.cpp fact.h fact.cpp
	g++ $(FLAGS) -o main main.cpp fact.cpp

testing: fact.h fact.cpp catch.hpp testing.cpp
	g++ $(FLAGS) -o test testing.cpp fact.cpp

clean:
	rm -f *.o main test
