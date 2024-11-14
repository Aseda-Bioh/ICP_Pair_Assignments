#!/bin/bash

echo "Enter a number:"
read num

#first, we check if the number is not less than 2,
#If is less than 2, then we know it's not a prime number
if [ $num -lt 2 ]; then
    echo "$num is not a prime number."

#else, we try to find a number that num can be divisible by, and we start from 2 
#since every number is divisible by 1, and starting from 1, won't make the calculation accurate
else
    for((i = 2; i * i <= num; i++)); do

        #we check if num is divisible by i,
        #if it is divisible then num isn't prime
        if [ $((num % i)) -eq 0 ]; then
            echo "$num is not a prime number."
            exit
            fi
    done

    # If no divisors were found, $num is prime
    echo "$num is a prime number."
fi
