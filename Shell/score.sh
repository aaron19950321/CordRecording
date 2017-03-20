#!/bin/bash

read -p "please enter a score :" SCORE

case $SCORE in
   # ?|1?|2?|3?|4?|5?)
      ?|[1..5]?)
        echo fail
        ;;
    6?|7?)
        echo passed
        ;;
    8?|9?)
        echo good
        ;;
    100)
        echo excellent
esac
