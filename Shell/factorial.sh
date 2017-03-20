#!/bin/bash
TMP=1
read -p "input:" num 

for ((i = 1;i <= $num ;i++))
do
    TMP=$(( $i * $TMP ))
done

echo $TMP 
