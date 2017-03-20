#!/bin/bash

#exp:
echo `expr 1 + 2`


read -p "input a number:" num

read -p "input string:" string

if [ string=aaa ]
then
    echo "it is aaa"
else
    echo "it isn't aaa"
fi
:<<!
if [ $num -eq 1 ]
then 
    echo "one"
else 
    echo "others"
fi
!
case $num in 
    1)
        echo "one"
        ;;
    2) 
        echo "two"
        ;;
    *)
        echo "others"
esac
