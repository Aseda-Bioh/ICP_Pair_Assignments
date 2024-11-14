#!/bin/bash
read -p "What is your favorite operating system: " os
input=${os,,}

if [ "$input" == "windows" ] || [ "$input" == "mac" ]; then
    echo "You're not a serious person."
elif [ "$input" == "linux" ]; then
    echo "Great choice!"
else
    echo "Is $input an operating system?"
fi
