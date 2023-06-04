#! /bin/bash
read -p "Enter a : " a
read -p "Enter b : " b
if [[ $a -gt $b ]]
then
	echo "$a is greater than $b."
elif [ $a -eq $b ]
then
	echo "$a is equal to $b."
else
	echo "$a is less than $b."
fi

# tesing
read -p "Enter a : " a
read -p "Enter b : " b
if [ $a == $b ]
then
	echo "Equal."
elif [ $a != $b ]
then
	echo "Not Equal."
else
	echo "Invalid."
fi

