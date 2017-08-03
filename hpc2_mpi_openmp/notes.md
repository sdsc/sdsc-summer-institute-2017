# Parallel Computing using MPI & Open MP


Memory in order of access speed: registers > caches > main memory > remote memory
-> Manage data to improve performance of your program

Shrinking in the technology implies that the distance between processing units increases, and start not becoming uniform anymore -> consequences on the performance and characteristics (bandwidth and latency) of the communication. Main rule again is to improve the locality of what you are doing.

__Types of Parallelization__
3 types: with multiple data, multiple instructions (common) (only recently implemented), or both (common).

Fork-join (at some point the instruction diverge and the results are merged later) vs. SPMD (one single set instruction)

__Threads__
- Software threads (or OS threads): data structures within a process that tells the OS the state of a program
- Hardware threads (or hyper-threading for Intel): diff sets of registers that map the flow of execution to the hardware

Unless you have the hyperthreading, one OS threads will have to wait for the other OS thread to stall before fetching instructions. With hyperthreading, several OS threads can execute on a core at the same time.

If  you're concerned about floating-point operations, hyperthreading might not help you and even be harmful.

### OpenMP
Forking: for loops, cut into chunks and distribute the execution of these sections over threads
OpenMP instructions are ignore if you move your code to a platform that doesn't have OpenMP.
In a parallel region in the code, all variables are shared.

__OpenMP example__
On Comet in hpc2_mpi_openmp/examples/openmp/:

        salloc -N 1 -t 00:30:00 --reservation=SI2017DAY4
        make
        OMP_NUM_THREADS=10 ./pi_openmp
        
reduction: Each thread gets its own (private) copy of a variable to modify, they are then combined in some way (according to user-defined reduction operation) at the end

Have a look at your core specs

         hwloc-ls

Careful with threads, especially with dependencies in loops. No order predefined at execution.

### MPI

MPI_Comm_size: # of processes
MPI_Comm_rank: identifier

If one instance of the program fails, the whole MPI run will abort

__Peformance considerations__

_Surface to volume ratio_
Perfect efficiency would be if you increase the computing volume and the number of processors by the same factor then it takes the same time
Strong scaling if the time increases

Profilling gives a summary. 
Tracing gives timeline but expensive to use.

Schedulers manage locality to some extent. They are ways to manage locality, the mapping, and to bind some processes to certain nodes.
