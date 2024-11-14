#!/bin/bash
read -p "Enter a non-negative number: " num
factorial=1

if [ $num -eq 0 ] || [ $num -eq 1 ]; then
    echo "The factorial of $num is: 1"

elif [ $num -gt 1 ]; then
    for (( i=1; i<=num; i++ )); do
        factorial=$((factorial * i))
    done
    echo "The factorial of $num is: $factorial"
fi
