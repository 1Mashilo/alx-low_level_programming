 CC = gcc
CFLAGS = -Wall -Werror -pedantic -std=gnu11
LIBS = -lcheck -lm -lpthread -lrt -lsubunit 

all: test_search_algorithms

test_search_algorithms: 0-linear.o 1-binary.o test_search_algorithms.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

0-linear.o: 0-linear.c search_algos.h
	$(CC) $(CFLAGS) -c $<

1-binary.o: 1-binary.c search_algos.h
	$(CC) $(CFLAGS) -c $<

test_search_algorithms.o: test_search_algorithms.c search_algos.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o test_search_algorithms
	
clean-objects:
	rm -f *.o