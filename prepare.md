## Preparing for the Summer Institute

You will get the most out of the SDSC Summer Institute if you come well prepared. By brushing up on your knowledge of Linux and installing all necessary software on your laptop before arriving, you’ll be able to focus your attention on the skills and topics that are most relevant to high performance and data intensive computing.

###  Computer requirements

* You will need to bring your own laptop for the summer institute. This will be used both for running software locally and connecting to SDSC’s supercomputers.

* For visualization tutorial a mouse with scroll wheel is highly recommended (laptop track pads are very difficult to use for 3D navigation).

### Basic Linux skills

Please remember that basic Linux skills are necessary to complete the hands-on exercises. If it’s been a while since you’ve worked in a Linux environment, be sure to reacquaint yourself with the following topics: copying, listing, deleting and renaming files; using wildcards; navigating directories; changing file permissions; setting environment variables; using common utilities (grep, cat, less, head, sort, tar, gzip). A nice tutorial can be found here http://www.ee.surrey.ac.uk/Teaching/Unix/. You should also be comfortable with one of the standard Linux editors, such as vim, emacs, or nano.

### Connecting to SDSC HPC systems

Since you will be using your laptop to access SDSC’s HPC systems, it is essential that you be able to run secure shell (ssh) or a similar connection tool with X11 forwarding enabled. For Mac users, running ssh is trivially easy. Just launch the Terminal application and then connect with ssh from the command line

    ssh -X username@hostname

Windows users will need to run an X Server and an ssh-like client. Cygwin provides a comprehensive Linux-like environment and an X server (Cygwin/X)

* http://www.cygwin.com/
* http://x.cygwin.com/

If you have a pre-existing SDSC account, please make sure that you can login to Comet. If you forgot your password, please visit <http://xsede.org> to recover it.

If you do not already have an SDSC account, you will be provided with one on the first day of the Summer Institute.

### Software requirements

While many of the hands-on activities will be run on Comet, you will also be asked to do some of the exercises on your laptop. Much of the summer institute involves two parallel sessions: a traditional HPC track and a data track. If you plan to participate in the latter, consider installing the following software before you arrive.

#### R (statistical programming language) For Machine Learning Overview

Participants who will be attending the Machine Learning Overview parallel session on Thursday will need to install R (https://www.r-project.org/) and RStudio Desktop open source edition (https://www.rstudio.com/) on their laptops. A basic understanding of R will be very helpful and we recommend the following resources:

* https://cran.r-project.org/doc/contrib/Torfs+Brauer-Short-R-Intro.pdf
* https://cran.r-project.org/doc/manuals/r-release/R-intro.html


#### VisIt (software tool) for Visualization

* Install VisIt software version 2.12.3 on your computer. Since we will do remote visualization on Comet cluster the correct software version is important. Binaries are recommended (avoid compilation). <https://wci.llnl.gov/simulation/computer-codes/visit/executables>
* Download sample data set for visualization (181 mb) https://wci.llnl.gov/content/assets/docs/simulation/computer-codes/visit/visit_data_files.tar.gz
* Download Comet host file for VisIt at http://users.sdsc.edu/~amit/temp/comet/host_comet_2_12_x.zip
* &#x1F534; Bring a mouse with scroll wheel, as 3D navigation with laptop trackpad is quite onerous
