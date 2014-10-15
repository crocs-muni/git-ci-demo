all: main

main: main.cpp
	g++ -o main main.cpp

clean:
	rm -f *.o main
