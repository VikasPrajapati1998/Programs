#! /bin/bash
a="arjun"
b="vikas"
read -p "Enter a String : " a
read -p "Enter b String : " b
if test $a != $b
then
	echo "Both are not equal."
elif test $a == $b
then
	echo "Both are equal."
else
	echo "Invalid Input."
fi

