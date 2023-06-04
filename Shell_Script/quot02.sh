#!/bin/bash

list=`ls -l`
msg=`echo "This is the dummy message"`
echo ${list}
echo -e "\n"
echo $msg
echo -e "\n"
echo "Print dollar : \$"
echo "Print quote : \'"
echo "Print double quote : \""
echo "Print back slash : \\"

