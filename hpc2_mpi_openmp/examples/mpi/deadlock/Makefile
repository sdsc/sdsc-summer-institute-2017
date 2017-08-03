CC=mpicc

.PHONY: all clean

all: deadlock

deadlock: deadlock.c
	$(CC) -Wall -g -o $@ $<

clean:
	$(RM) deadlock
