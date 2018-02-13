CXXFLAGS = --std=c++14

all: main

debug: CXXFLAGS+= -g
debug: main

rebuild: clean main


main:puzzle.o fuse.o main.cpp
	
	$(CXX) $(CXXFLAGS) -o  main main.cpp puzzle.cpp fuse.cpp
	./main

puzzle.o:puzzle.cpp *.h

	$(CXX) $(CXXFLAGS) -c puzzle.cpp

fuse.o:fuse.cpp *.h

	$(CXX) $(CXXFLAGS) -c fuse.cpp

clean:
	-rm -f *.o *.gch *~ main


