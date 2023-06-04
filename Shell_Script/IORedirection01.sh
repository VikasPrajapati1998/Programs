#!/bin/bash

# Output Redirection
ls > list.txt
cat list.txt
echo -e "\n"

ls /bin >> rootList.txt
cat rootList.txt

cat -n << rootList.txt

echo "\n\nProgram End"

