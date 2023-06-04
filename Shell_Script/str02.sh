#! /bin/bash
a="arjun"
read -p "Enter a String : " a
if [ -z $a ]
then
	echo "Length zero."
elif test -n $a
then
	echo "Not lenght zero."
else
	echo "Invalid Input."
fi

