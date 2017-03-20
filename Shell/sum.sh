#!/bin/bash

SUM=0

for ((i = 1;i < 11 ;i++))
do
    SUM=$(($i+$SUM))
done
echo $SUM
