#!/bin/bash

read x a b
if [[ $x == "S" ]]; then
    array=("A" "B" "C" "H" "J" "K")
else
    array=("A" "B" "C" "D" "E" "F" "G" "H" "J" "K")
fi
b=$((b - 1))
echo $a${array[$b]}