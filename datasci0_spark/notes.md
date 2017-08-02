# SPARK

1. login to comet
2. `git clone https://github.com/sdsc/sdsc-summer-institute-2017`
3. `cd sdsc-summer-institute-2017/datasci0_spark/`
4. `sbatch --res=SI2017DAY3 spark.slrm`
5. `squeue -u $USER` to check your node. e.g. comet-num1-[num2-num3], then in your browser enter http://comet-num1-num2.sdsc.edu:8888 
6. 
Presentation/Introduction
Cloud: less reliability, so they have redundent files on each machine

What is Spark:
 - distributed computing framework
 
Problems:
 1. Storage
 	 - Solution: HDFS (hadoop distributed file system)
 2. Computation
 	 - Data I/O across network is slow, failing computations
 	 - Solution: Hadoop Mapreduce / Spark
 	 	 - execute computations where data is, rerun failed jobs
 3. Communication
 	 - Need data transfer across network
 	 - Solution: highly optimized Shuffle

Features of Spark:
 - Resiliency: tolerant to node failures
 - Speed: supports in-memory caching
 - Ease of use: python/scala interfaces and interactive shells
 - SQL operations with Spark-SQL
 - Iterative ML with Spark-MLlib

More sophisticated than MPI - framework decides where and how to run tasks without explicit specifications

Resilient Distributed Dataset (most important thing!!)

partition: a chunck of data in spark

Resilient Distributed Dataset (RDD)
 - data created from HDFS, S3, HBase, JSON, text, folders, or transformed from other RDD
 - distributed: divided in partitions (atomic chunks of data) across cluster
	 - one "variable" points to this distributed dataset
 - resilient: recover from errors, node failures or slow processes
 	 - achieved through backups (3 copies of each chunk)

On worker nodes the Spark Executor Java Virutal Machine communicates with HDFS and spawns PySpark processes
 - Use spark library to process data to avoid copying data into python
 	 - when using spark data frames, python acts only as a wrapper

Driver program manages interactions with the worker nodes and cluster manager

Can only have one jyputer kernel running on spark cluster. Close and halt the first one and then launch the second.

Narrow Transformations (per node):
 - map(func) - apply function to each row (element) in a dataset
 - filter(func) - keep only elements where function is true
 - sample(withReplacement, fraction, seed) - get a random data subset
 - coalesce(numParitions) - merge partitons to reduce them to numPartitions

Wide Transformations (inter node):
 - reduceByKey(func) - (K,V) pairs => (K, reduce V with func)
  	 - called a shuffle
 	 - writes locally to disk and other nodes read data via the network
 - groupByKey - (K,V) pairs => (K, iterable of all V)
 - repartition(numPartitions) - similar to coalesce shuffles all data to increase or decrease number of partitions to numPartitions

Original Hadoop MapReduce operation only works with key,value pairs. Not required for Spark.

R alternative: SparkR, Sparklyr

Caching RDDs
 - Intermediate RDDs are created (and deleted) by Spark
 - .persist will prevent the deletion of intermediate RDDs
 - allows for performance increase by reuse of cached data
 - recommended after data cleanup and preprocessing
