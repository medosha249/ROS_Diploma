#!/bin/bash

print()
{
    echo "Hello From Function"
    return 5
}

print
echo $?

fun()
{
    echo "Parameters is " $1 $2
    return 10
}

fun medo 123
echo $?