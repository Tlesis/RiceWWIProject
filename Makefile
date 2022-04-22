
CC=g++
CFLAGS=-Wall -g

all: main

main: Main.o Info.o
	$(CC) $(CFLAGS) bin/Main.o bin/Info.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^
	mv $@ bin

clean:
	rm a.out bin/*.o

run: main
	./a.out