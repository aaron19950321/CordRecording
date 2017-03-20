#!/bin/bash

if [ $# -eq 0 ]
then
    echo "error"
    exit
fi
if [ -d $1 ]
then 
    ls $1
elif [ -f $1 ]
then 
    cat $1
else
    echo it is not  a file
fi
