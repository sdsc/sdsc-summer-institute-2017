How to use Comet filesystems: home, parallel Lustre, local SSD
========

**out-of-core**: do computations that do not fit in RAM
**checkpointing**: save the state of an application to restart it later

(don't be like the important bunny -- know the different types of storage)

## Available filesystems

### Home:
 - backed up
 - 100 GB
`/home/$USER`


### Scratch (will stay for ~30d):
 - not backed up

    `/oasis/scratch/comet/$USER/temp_project`
    
### Local SSD:

 - Only available on computing nodes
 - `/scratch/$USER/$SLURM_JOB_ID`

Local file systems - low latency, modest bw - good for lots of small files
Network file systems - good for small number of large files

## Lustre

### Five main parts 

- lustre clients (on individual nodes)
- object storage servers (OSS), targets (OST)
    - Drives
- metadata servers (MDS), targets (MDT)
    - SSD & RAM

### File Storage

Files are broken into stripes and each stripe stored on individual OSTs

 * **stripe count** is the number of targets the file chunks are going to be written to. **Not** the total number of chunks.
 * **stripe size** is the size of each chunk (try to align size of write operations with stripe size for best performance)

