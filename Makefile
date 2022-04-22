
CC=g++
CFLAGS=-Wall -g
NAME=project

OBJDIR=bin/obj

all: main

# Compiles object files into one binary
main: Main.o Info.o
	$(CC) $(CFLAGS) $(OBJDIR)/Main.o $(OBJDIR)/Info.o -o $(NAME).out
	mv $(NAME).out bin

# Makes .o object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $^
	mv $@ $(OBJDIR)

# Removes Compiled files
clean:
	rm bin/$(NAME).out $(OBJDIR)/*.o

# Compiles the project & runs the binary
run: main
	./bin/$(NAME).out