
See previous notes at: <https://github.com/sdsc/sdsc-summer-institute-2017>


# GIT

<https://github.com/zonca/conversion_tofix>
 hands-on session
 
     git config --global user.name "your name"
     git config --global user.email "your email"
     git config --global color.ui "auto"
     git config --global core.editor "nano -w" # or your editor
     git config --list # to see all the configs
     
     
jupyter user: check out nbdime

Create a new repo on github then clone it to comet:

    git clone https://github.com/username/firstname_conversion

To see status of working branch:

    git status
    
**NB**: NOT all files in folder of cloned repository will be automatically tracked (useful e.g. for data/input files)! Use `git add` to track files you create that you **do** want in the repo. (like adding to the "shopping cart")

To see what changes have been made since last commit:

    git diff

To commit changes (`-m` flag adds comment about what you did):

    git commit -m "some comment here"
    git log #check the history; there will be a long string commit_id
    git show commit_id #see contents of commit

**NB**: Git only cares about files, not folders. Adding (empty) directories will not trigger git to think anything needs to be committed. Once a directory has a file in it, you can add it and all files inside will be tracked.

You can add multiple things to the "shopping cart" -- should only do this if the changes are related. Otherwise best practice is to commit unrelated changes separately, i.e. don't do `git add .` unless necessary.

Push your code online:
    
    git remote -v #check out what your remote is, usually origin
    git push (origin master)
    
If you forget your password (but you need an SSH certificate for Github):

    git remote remove origin
    git remote add origin git@...(link from your repo online)
    
    
Also possible to edit files directly on Github.com - useful for terminal-shy collaborators.
    
    
    
    
    
Questions:
1. does git ignore ignores hidden files? (namely annoying .DS_store in Mac OX)
2. What is the importance of adding collaborators, when individual users can already branch/fork existing repositories?
    
side notes: `clear` clears your terminal 


