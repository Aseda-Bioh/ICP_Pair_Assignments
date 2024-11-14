#!/bin/bash
read -p "Enter the first number: " firstNum
read -p "Enter the second number: " secondNum

if [ $firstNum -gt $secondNum ]; then
    lcm=$firstNum
else
    lcm=$secondNum
fi

while true; do
    if [ $((lcm % firstNum)) -eq 0 ] && [ $((lcm % secondNum)) -eq 0 ]; then
        echo "The LCM of $firstNum and $secondNum is: $lcm"
        break
    fi
    lcm=$((lcm + 1))
done