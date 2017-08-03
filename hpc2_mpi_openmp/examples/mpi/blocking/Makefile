CC=mpicc

.PHONY: all clean

all: blocking

blocking: blocking.c
	$(CC) -Wall -g -o $@ $<

clean:
	$(RM) blocking
