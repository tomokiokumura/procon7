#!/bin/bash

read s

ans=0;
for ((i = 0; i < ${#s}; i++)) {
    if [[ ${s:$i:2} == "CM" ]]; then
        ans=$((ans + 900))
        i=$((i + 1))
    elif [[ ${s:$i:2} == "CD" ]]; then
        ans=$((ans + 400))
        i=$((i + 1))
    elif [[ ${s:$i:2} == "XC" ]]; then
        ans=$((ans + 90))
        i=$((i + 1))
    elif [[ ${s:$i:2} == "XL" ]]; then
        ans=$((ans + 40))
        i=$((i + 1))
    elif [[ ${s:$i:2} == "IX" ]]; then
        ans=$((ans + 9))
        i=$((i + 1))
    elif [[ ${s:$i:2} == "IV" ]]; then
        ans=$((ans + 4))
        i=$((i + 1))
    elif [[ ${s:$i:1} == "I" ]]; then
        ans=$((ans + 1))
    elif [[ ${s:$i:1} == "V" ]]; then
        ans=$((ans + 5))
    elif [[ ${s:$i:1} == "X" ]]; then
        ans=$((ans + 10))
    elif [[ ${s:$i:1} == "L" ]]; then
        ans=$((ans + 50))
    elif [[ ${s:$i:1} == "C" ]]; then
        ans=$((ans + 100))
    elif [[ ${s:$i:1} == "D" ]]; then
        ans=$((ans + 500))
    elif [[ ${s:$i:1} == "M" ]]; then
        ans=$((ans + 1000))
    fi
}

echo $ans 