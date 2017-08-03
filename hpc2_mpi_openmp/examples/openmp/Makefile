CC=icc

.PHONY: all clean

all: heat_openmp pi_openmp

pi_openmp: pi_openmp.c
	$(CC) -openmp -Wall -g -o $@ $<

heat_openmp: heat_openmp.c
	$(CC) -openmp -Wall -g -o $@ $<


clean:
	$(RM) heat_openmp pi_openmp
