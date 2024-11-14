#!/bin/bash

# Read two numbers from the user
echo "Enter the first number:"
read num1
echo "Enter the second number:"
read num2


while [ $num2 -ne 0 ]; do
    temp=$num2
    num2=$((num1 % num2))
    num1=$temp
done

echo "GCD is $num1"