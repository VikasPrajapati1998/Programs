#!/bin/bash

# check prime number or not
checkPrime () {
	num=$1
	for ((x=2; x<=num/2; x++))
	do
		if test `expr $num % $x` -eq 0
		then
			return 0
		fi
	done
	return 1
}

read -p "Enter a number : " n
checkPrime $n
bool=$?
if [ $bool -eq 1 ]
then
	echo "$n is a Prime Number."
else
	echo "$n is not a Prime Number."
fi

echo -e "program end\n"

