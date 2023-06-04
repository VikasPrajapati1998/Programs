#! /bin/bash
read -p "Enter marks : " mark
if [ $mark -gt 60 -a $mark -le 100 ]
then 
	echo "First Division."
elif [ $mark -gt 40 -a $mark -le 60 ]
then
	echo "Second Division."
elif [ $mark -gt 30 -a $mark -le 40 ]
then
	echo "Third Division."
elif [ $mark -gt 0 -a $mark -le 30 ]
then
	echo "Fail."
else
	echo "Invalid Number"
fi

