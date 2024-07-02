#!/bin/bash

read -p "Please Enter Command: " $command

if [ -f $command ]
then
    echo "$command is available"
else
    echo "Command is not avilable"
    echo "install $command using : "
     sudo apt update && sudo apt install $command
fi
$command
