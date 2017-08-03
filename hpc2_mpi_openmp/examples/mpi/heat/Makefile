FC=mpif90

.PHONY: all clean

all: heat_mpi

heat_mpi: heat_mpi.f90
	$(FC) -g -nofree -o $@ $<

clean:
	$(RM) heat_mpi *.dat
