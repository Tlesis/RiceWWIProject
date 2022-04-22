
CC=g++
CFLAGS=-Wall -g
NAME=project

all: main

# Compiles object files into one binary
main: Main.o Info.o
	$(CC) $(CFLAGS) Main.o Info.o -o $(NAME).out

# Makes .o object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $^

# Removes Compiled files
clean:
	rm $(NAME).out *.o

# Compiles the project & runs the binary
run: main
	./$(NAME).out