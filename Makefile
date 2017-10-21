CC = gcc
CFLAGS = -g -Wall -pedantic
LIBFILE = src/sort.c src/list.c

all: examples

examples:folders fsort.c	
	@echo "Examples Compiled to bin Folder"

folders:
		mkdir bin

fsort.c:
	$(CC) $(CFLAGS) $(LIBFILE) examples/fsort.c -o bin/fsort

clean:
	rm -r bin
