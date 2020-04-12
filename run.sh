#!/bin/bash

echo "Compiling..."
gcc -o a.out *.c
if [ $? == 0 ]
then
  echo "Running..."
  ./a.out
  rm a.out
else
  echo "Compilation Error."
fi
