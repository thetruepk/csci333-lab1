CC = g++
CFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

all: clean hello problem001 problem002

hello: hello.cpp
	$(CC) -o hello hello.cpp $(CFLAGS)

problem001: projectEuler001.cpp
	$(CC) -o problem001 projectEuler001.cpp $(CFLAGS)

problem002: projectEuler002.cpp
	$(CC) -o problem002 projectEuler002.cpp $(CFLAGS)

clean:
	rm -f *~
	rm -f hello
	rm -f problem001
