#!/bin/bash

if [ $# -eq 0 ]
then
    echo "error"
    exit
fi

if [ -f $1 ]
then
    echo "a simple file"
else 
    echo "not a file"
fi
