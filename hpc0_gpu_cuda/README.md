Content
=======
This directory contains the slides and exercises for the SDSC 2016
Summer Institute half-day workshop on GPU computing and programming.

Andreas Goetz, SDSC (agoetz@sdsc.edu)


How to use Comet's GPU nodes
============================

# Obtain interactive shared GPU node on SDSC Comet (4 hours)
srun -t 04:00:00 --pty --nodes=1 --ntasks-per-node=6 --gres=gpu:1 \
     --reservation=SI2017DAY3 -p gpu-shared --wait 0 /bin/bash
     
# Load CUDA and PGI compiler modules
module purge
module load gnutools
module load cuda
module load pgi

# Check nvcc compiler version
nvcc --version

# Check installed GPUs with NVIDIA System Management Interface (nvidia-smi)
nvidia-smi  # check output for any jobs running on GPUs

# Check visible devices (should be set to free GPU)
echo $CUDA_VISIBLE_DEVICES  # should be set by queuing system to free GPU


NVIDIA CUDA Toolkit code samples
================================

# Copy and compile CUDA code samples that come with the CUDA Toolkit
cuda-install-samples-7.0.sh ./  # install into current directory
cd NVIDIA_CUDA-7.0_Samples
make -j 6

# Or compile only samples of interest, e.g. deviceQuery
cd 1_Utilities/deviceQuery
make

# Check out the many code samples
# Very instructive resource

# Run deviceQuery to query information on available GPUs
cd 1_Utilities/deviceQuery/
./deviceQuery


Simple code samples accompanying slides
=======================================

# See directory cuda-samples
# Compile with 
nvcc example.cu -o example.x

# See directory openacc-samples
# Compile with 
pgcc example.c -o example.x -acc -Minfo=accel


