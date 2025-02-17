# Makefile for Tutorial 5
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g

# Object files: assume test.cc, Tester.cc are provided in the folder
OBJS = test.o Tester.o RGB.o TextArea.o TAArray.o

all: test

test: $(OBJS)
	$(CXX) $(CXXFLAGS) -o test $(OBJS)

test.o: test.cc
	$(CXX) $(CXXFLAGS) -c test.cc

Tester.o: Tester.cc Tester.h
	$(CXX) $(CXXFLAGS) -c Tester.cc

RGB.o: RGB.cpp RGB.h
	$(CXX) $(CXXFLAGS) -c RGB.cpp

TextArea.o: TextArea.cpp TextArea.h
	$(CXX) $(CXXFLAGS) -c TextArea.cpp

TAArray.o: TAArray.cpp TAArray.h
	$(CXX) $(CXXFLAGS) -c TAArray.cpp

clean:
	rm -f *.o test
