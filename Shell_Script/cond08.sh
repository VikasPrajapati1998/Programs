#! /bin/bash
read -p "Enter a : " a
read -p "Enter b : " b
if test $a == $b
then
	echo "Both are equal."
else
	echo "Both are not equal."
fi

