all main
debug: CXXFLAGS+= -g
debug: main
rebuild: clean main

CXXFLAGS = --std = c++14


main:student.o main.cpp

	$(CXX) $(CXXFLAGS) -o  main main.cpp test_student.cpp

student.o:student.cpp *.h

	$(CXX) $(CXXFLAGS) -c student.cpp

clean:
	-rm -f *.o *.gch *~ main
