PROJECT = example
CPP = $(wildcard *.cpp)
CXX = g++
FLAGS = -Wall -std=c++11
OBJ = $(CPP:.cpp=.o)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $^ -o $@

all: $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(PROJECT)
