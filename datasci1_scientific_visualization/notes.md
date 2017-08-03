# Visualization

Tutorial material:
http://users.sdsc.edu/~amit/scivis-tutorial/

Getting data into VisIt:
https://wci.llnl.gov/codes/visit/2.0.0/GettingDataIntoVisIt2.0.0.pdf

VisIt manuals:
https://wci.llnl.gov/simulation/computer-codes/visit/manuals

Definition of Visualization: a way to gain insight from a scientific dataset

Advantages:
- find patterns
- preattentive attributes help us understand things about the data
- notice errors
- provides an independent method to check an hypothesis about the data


Perspective projection
- When things are distorted, get information about distance but loose info about scale

Volumetric rendering: mark densities of some volumes as transparent or translucid. Mapping is called transfer function

Streakline: drop a point in the flow and let it evolve over time
Sreamline: line along the flow at a given time

Better to use intensity rather than color on colormaps. In particular intensity is the only channel ok for colorblinds. Do not use rainbow colormaps.

Color maps: http://colorbrewer2.org

Debugger VDT is compatible with VisIt

## VisIt demo

Surface of the box
+N: "nodes"
+S: "spreadsheet"

VisIt does not support vectorization
Use PNG. PNG gets transparency, JPEG doesn't
    
https://www.seedme.org

Expressions to operate on variables inside VisIt

Python interpreter to save your interactive session
Convert what you do as a script and then apply it automatically to another dataset
