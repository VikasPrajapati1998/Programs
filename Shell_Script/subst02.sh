#!/bin/bash
echo "List of all files. "
list=`ls -a`
echo -e "List of files present here\n$list"

fileDetails=`ls -l`
echo -e "List of files with details\n$fileDetails"

