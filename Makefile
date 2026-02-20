CXX = g++
CXXFLAGS = -Wall -g

all: program

program: main.o address.o date.o
	$(CXX) $(CXXFLAGS) -o program main.o address.o date.o

main.o: main.cpp address.h date.h
	$(CXX) $(CXXFLAGS) -c main.cpp

address.o: address.cpp address.h
	$(CXX) $(CXXFLAGS) -c address.cpp

date.o: date.cpp date.h
	$(CXX) $(CXXFLAGS) -c date.cpp

run: program
	./program

debug: program
	gdb ./program

valgrind: program
	valgrind ./program

clean:
	rm -f *.o program