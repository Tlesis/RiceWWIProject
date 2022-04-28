
CC=g++
CFLAGS=-Wall -g -std=c++17
WARN=-pedantic -Wextra -Werror -Wshadow -Wsign-conversion
NAME=RussiaReflect

all: main

# Compiles object files into one binary
main: Main.o Info.o
	$(CC) $(CFLAGS) Main.o Info.o -o $(NAME).out

# Compile with all warnings
warn: Main.o_Warn Info.o_Warn
	$(CC) Main.o Info.o -o $(NAME).out

# Makes .o object files
%.o: %.cpp
	$(CC) -O3 $(CFLAGS) -c $^

# Makes .o object files with all warnings
%.o_Warn: %.cpp
	$(CC) -O3 $(CFLAGS) $(WARN) -c $^

# Removes Compiled files
clean:
	@echo Cleaning. . .
	rm $(NAME).out *.o

# Compiles the project & runs the binary
run: main
	./$(NAME).out