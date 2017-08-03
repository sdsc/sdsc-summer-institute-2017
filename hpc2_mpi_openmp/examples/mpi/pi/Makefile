CC=mpicc

.PHONY: all clean

all: pi_mpi

pi_mpi: pi_mpi.c
	$(CC) -Wall -g -o $@ $<

clean:
	$(RM) pi_mpi
