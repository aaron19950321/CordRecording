#!/bin/bash

echo PID:$$

echo 'pwd & name is:'$0
echo "pwd & name is:"$0

echo "the number of parameters is:"$#     

echo "the parameters is:"
echo $*
echo $@

echo "the latest return is "$?
