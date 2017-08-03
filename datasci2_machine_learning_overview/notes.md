# Machine Learning Overview

## Intro
Types of ML
 - Classification (supervised)
 - Regression (supervised)
 - Cluster analysis (unsupervised)
 - Association analysis (unsupervised)

Supervised vs unsupervised (target unknown)

The V's of ML:
Volume / Velocity / Variety / Veracity -> Value


## Data Exploration

Data types
- Numeric: bounded or not-bounded
- Categorical

### Hands on: weather dataset
Don't upgrade your R to 3.4.1 just for rattle! It won't work anyways! And then you need to update your Rstudio as well :( 

line 60 should be sum(complete.cases(df))

## Data preparation with Paul

Long to wide
Wide to long
Parameter selection/optimization
- If it is SNP data, they are usually equally important therefore it is hard to condense the dataset (or count on linkage disequilibrium?). But if it is MRI images, you only care about the general patterns instead of each pixel.


## Classification

Algorithm
- Decision tree
- Random forest

## Clustering 
It is unsupervised!
Tries to find natural groups from data.

- Kmeans clustering: Assuming initial number of clusters (k) is subjective and crucial. 
    - Choosing k: (cluter::silhouette)
        - Vary K from 1 to N, N being less than the number of points, and check for within-cluster SSE. If SSE decreases smoothly with k, then the data does not have natural clusters. If SSE is high for say k=2 but decreases sharply for k=3, the the data has 3 clusters.
        - Look for the elbow.
        - Cross validation

curse of dimensionality: once you have more than one dimension, 

- Fuzzy clustering

- EM clustering (works pretty well but slow and scale up not very nicely)
- Cosine: sparse vectors
- Density based clustering (good for geographic stuff)

Cluster vs. classification
