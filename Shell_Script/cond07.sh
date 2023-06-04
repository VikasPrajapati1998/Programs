#! /bin/bash
read -p "Enter a : " a
read -p "Enter b : " b
if test $a -ge $b
then
	echo "$a is greater than $b."
else
	echo "$a is less than $b."
fi

