OS=$(shell uname)
ifeq ($(OS),Darwin)
CXXFLAGS=-framework OpenGL -lglfw
else
CXXFLAGS=-lglfw -lGL
endif


all: triangle

triangle: triangle.o
	g++ triangle.o -o triangle $(CXXFLAGS)

triangle.o: triangle.cpp
	g++ -c triangle.cpp

clean:
	rm -fr *.o triangle
