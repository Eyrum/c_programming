CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

stacktest: stack_test.o stack.o
	$(CC) -o stacktest stack_test.o stack.o $(CFLAGS)

stack_test.o: stack.c stack.h
	$(CC) -c stack_test.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)
