
See previous notes at: <https://github.com/sdsc/sdsc-summer-institute-2017>

# How to automate a data analysis pipeline with a workflow manager

_Ilkay Altintas_

## Choices of stitching things
- Scripting
- Makefiles
- Workflow systems (add a scheduling aspect to the workflow, make full use of the knowledge of the infrastructure, make dynamic decisions when processing data)


## Example of MapReduce
split->map->shuffle&sort->merge
- for distributed file systems
- central steps need parallelization 
    - Map: choose granularity (size of data chunks)
    - Shuffle&sort: parallelization for intermediate data. Importance of data locality: it helps that data is grouped together in this process

__Why to use a workflow__
batch computing vs real-time computing
pipeline vs workflow
tactical steps vs. conceptual steps
fosters collaboration

## Analysis steps for reproducitibility
- access
- manage (clear data)
- analyze
- report (feedback on the first 3 steps to reproduce them at scale)

__keep scalability in mind__

# KEPLER demo

Can specify where to send jobs, the ssh id file, the scheduler
Works with preexisting scripts or specify parameters in the workflow itself for each actor/action
Can build own objects into the type system, more specifically to own project