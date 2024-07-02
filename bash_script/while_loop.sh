#!/bin/bash

mynum=1

while [ $mynum -le 10 ]
do
    echo $mynum
    mynum=$(($mynum + 1))
    sleep 0.5
done
