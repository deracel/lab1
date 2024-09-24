CC = gcc
CFLAGS = -c -Wall

all: example

example: kvadr.o main.o reverse.o srav.o
	$(CC) kvadr.o main.o reverse.o srav.o -o example
main.o: main.c
	$(CC) $(CFLAGS) main.c
kvadr.o: kvadr.c
	$(CC) $(CFLAGS) kvadr.c
reverse.o: reverse.c
	$(CC) $(CFLAGS) reverse.c
srav.o: srav.c
	$(CC) $(CFLAGS) srav.c

clean:
	rm -f *.o example

.PHONY: all clean

