
See previous notes at: <https://github.com/sdsc/sdsc-summer-institute-2017>


# Singularity and Comet Virtual Clusters



To build singularity container without having a virtual machine: singularity-hub.org

1. Grab a node on comet:  

        srun --pty --nodes=1 --ntasks-per-node=24 -p compute -t 01:00:00 --reservation=SI2017DAY2 --wait 0 /bin/bash
    
2. Load singularity 
 `module load singularity`
 

3. pull pre-built singularity container (using a hello-world example)

        singularity pull shub://hpcdevops/singularity-hello-world:master


Setting up Singularity: https://asciinema.org/a/129867

<https://asciinema.org/~hpcdevops>

go to RAM: /dev/shm?

* Does anyone remember what the commands are to then I guess do things with singularity?  I know he showed them but I can't seem to find them (I've ran the singularity pull but am not sure what to do next)

See:
<http://singularity.lbl.gov/quickstart>

for example to get a shell:

    IMAGE=/path/to/image.img
    singularity shell $IMAGE
    
to run a command:

    singularity exec $IMAGE cat /etc/*release

Also see this post:

<https://zonca.github.io/2017/01/singularity-hpc-comet.html>

## Part II: Cloudmesh