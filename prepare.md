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

Install VisIt software version 2.9.2 on your computer. Since we will do remote visualization on Comet cluster the correct software version is important. Binaries are recommended (avoid compilation). <https://wci.llnl.gov/simulation/computer-codes/visit/executables>

Sample data set for visualization

Download and extract on your desktop (181 MB):

https://wci.llnl.gov/content/assets/docs/simulation/computer-codes/visit/visit_data_files.tar.gz

#### Singularity (software) for Containers

Participants who will be attending the _How to use Singularity Containers and
Comet Virtual Clusters_ session on Tuesday will need access to a Linux system
that they have __root__ on with [Singularity][] installed.

##### Linux System with __root__ access

If you have a Linux ([Debian][], [Ubuntu][], [RedHat][], [CentOS][], [Scientific
Linux][], etc...) laptop and have __root__ you are most of the way there and can
skip ahead to the _Install Singularity_ sub-section.

If you have a MacOS or Windows laptop you will need to create a Linux VM in
which you have __root__ access. If you already have virtualization software
installed and have __root__ on a Linux VM you can skip ahead to the _Install
Singularity_ sub-section.

If you don't have virtualization software installed and have admin privileges on
your laptop we recommend you install the free Oracle [VirtualBox][] software
(<https://www.virtualbox.org/wiki/Downloads>) and follow the User Guide
(<https://www.virtualbox.org/manual/ch01.html#gui-createvm>) to create a Linux
VM.

We also recommend you use either the free [CentOS][] 7
(<https://www.centos.org/download/>) or [Ubuntu][]
(<https://www.ubuntu.com/download/desktop>) distribution when creating your VM
only because those are the ones we have recent experience with.

##### Install Singularity

Now that you have a Linux system in which you have __root__ access please follow
the instructions (<http://singularity.lbl.gov/install-linux>) to install
[Singularity][] on Linux.

[Singularity]:  http://singularity.lbl.gov/ "Singularity"
[Ubuntu]:       https://www.ubuntu.com      "Ubuntu"
[CentOS]:       https://www.centos.org      "CentOS"
[RedHat]:       https://www.redhat.com      "RedHat"
[Debian]:       http://www.debian.org       "Debian"
[Scientific Linux]: https://www.scientificlinux.org "Scientific Linux"
[VirtualBox]:   https://www.virtualbox.org  "VirtualBox"
