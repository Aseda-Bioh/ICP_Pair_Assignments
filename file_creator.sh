#!/bin/bash

# a. We crated a folder in ~/Document/scripts
mkdir -p ~/Documents/scripts

# creating a file named myfile 
touch ~/Documents/scripts/myfile

for word in moose cow goose sow; do
    echo "I have a $word" >> ~/Documents/scripts/myfile
done

mkdir -p ~/Documents/backups
tar -czf ~/Documents/backups/myfile_backup.tar.gz -C ~/Documents/scripts myfile
