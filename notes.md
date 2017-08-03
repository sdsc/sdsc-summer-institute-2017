# Python for HPC

Why use jupyter on HPC? If you have loads of data and want to analyze/visualize it remotely

1. Create notebook password

        sh create_notebook_password.sh
2. start the job

        sbatch --res=SI2017DAY4 notebook_singularity.slrm

3. launch the notebook in your browser

        squeue -u $USER
    Get your node, say comet-xx-xx. Then in a browser, go to
    <http://comet-xx-xx.sdsc.edu:8888/>

4. Create a new Python 3 notebook.
* You can write latex in a markdown cell for equations.
* You can call shell commands with an exclamation mark before the command. E.g., `!hostname` will give `comet-xx-xx.sdsc.edu`.
* %% cell magic
* % inline magic

__Use concurrent.futures (Python>=3.6) to parallelize__
* map returns an iterator. By applying a function like list, you actually go through the elements
* Caveat: depending upon the amount of data that you want the other processor to analyze, you might have to transfer a lot of information to the initial node
* Use multiprocessing package in Python2, similar.

It is better to send file names instead of actual data to workers, since file name is only a string! but actual data might be big. Just let the work read in the data later. Or if you only have one file, you can send the boundaries of the chunck, so you are only sending two numbers.

## Use DASK
Dask: a parallel version of numpy. Very scalable, try it even if you only have 4 cores on your laptop!
Chunck size: tradeoff between spreading the work across processors and minimizing dask's scheduling work to coordinate that.

Dask is as lazy as Spark. compute() = collect()
It finds the best combination of operations to optimize the computation

Dask by default uses the maximum number of cores. Can customize that. 

Quote from Andrea: I don't wanna hear anything about python2 any more!!! It's 2017!

Need to determine the chunk size by trial and error.
Dask run on a single machine will use threads, so no copying is needed.

Processes vs. threads
Processes, seperate memory
Threads, sharing memory, are inside processes

GIL: global interpreter lock. That's a way to optimize serial code and is implemented in Python, which makes it difficult to do multithreading in Python manually. Best way is to use modules (such as future in concurrent.futures) that implement it under the hood.

Dasks works with scikit-learn:
<https://www.continuum.io/blog/developer-blog/dask-and-scikit-learn-3-part-tutorial>

## Dask on multinodes
Borrow Andrea's def file:
https://github.com/zonca/singularity-comet/blob/master/ubuntu_anaconda.def

Launch terminal from Jupyter notebook.
We're in th singularity container:

        cat /etc/*release

We're going to run a multi-node job. Start the scheduler 

        bash launch_scheduler.sh

dask-worker is a python process that can talk to the scheduler
back the original terminal:

        sbatch dask_workers.slrm

Check out the tasks being performed by dask
<http://comet-xx-xx.sdsc.edu:8787/workers>

127.0.0.1 is the address of the local machine, where the scheduler is launched. Client("127.0.0.1:8787") points from the Jupyter notebook (running on computing nodes) to the scheduler, for the workers to connect.
Home on comet is mounted on the singularity container. the jason file that tells workers where the scheduler is is generated when launching (the scheduler?).

## numba
just in time compiler
LLVM
numba avoids GIL as well.
Automatic parallization is being developed in numba.

Solution for __outofcore__ problem:
- dask
- joblib
- concurrant.future
- numba
- scikit_learn(?)

## Cython
Very mature and safe. Compile python scripts using c compiler(s) into excutables.
Cython magic for Jupyter notebook: `%%cython` so you don't lose the interactive niceness of python.
Cython is compiled, so for developing parallel code it is less straightforward than the other options
