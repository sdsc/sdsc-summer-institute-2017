FC=mpif90

.PHONY: all clean

all: heat_mpi heat_fpmpi

heat_fpmpi: heat_mpi.f90
	$(FC) -g -nofree -o $@ $< libfpmpi.a

heat_mpi: heat_mpi.f90
	$(FC) -g -nofree -o $@ $<

clean:
	$(RM) heat_mpi heat_fpmpi *.dat *.txt profile.*
