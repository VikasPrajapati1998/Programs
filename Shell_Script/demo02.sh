#! /bin/bash
a=$1
b=$2
if test $a -gt $b
then
	echo "A is greater"
elif test $a -lt $b
then 
	echo "B is greater"
else
	echo "Both are equal"
fi

