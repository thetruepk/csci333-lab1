CC = g++
CFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

all: clean hello

hello: hello.cpp
	$(CC) -o hello hello.cpp $(CFLAGS)

clean:
	rm -f *~
	rm -f hello
