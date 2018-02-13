debug: CXXFLAGS+= -g
debug: main test
rebuild: clean main

CXXFLAGS = --std=c++14


main:student.o main.cpp

	$(CXX) $(CXXFLAGS) -o  main main.cpp student.cpp
	./main

test:test_student.cpp student.o

	$(CXX) $(CXXFLAGS) -o test test_student.cpp student.cpp
	./test


student.o:student.cpp *.h

	$(CXX) $(CXXFLAGS) -c student.cpp

clean:
	-rm -f *.o *.gch *~ main test
