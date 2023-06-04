#!/bin/bash

# function to return sum of two number

Sum () {
	s=`expr $1 + $2`
	return $s
}

echo "Enter two number to get the sum of both."

read -p 'Enter a nubmer : ' a
read -p 'Enter b number : ' b
Sum $a $b
num=$?
echo -e "Sum = $num"

