#! /bin/bash
read -p "Enter marks : " mark
if test $mark -gt 60 -a $mark -le 100
then 
	echo "First Division."
elif test $mark -gt 40 -a $mark -le 60
then
	echo "Second Division."
elif test $mark -gt 30 -a $mark -le 40
then
	echo "Third Division."
elif test $mark -gt 0 -a $mark -le 30
then
	echo "Fail."
else
	echo "Invalid Number"
fi

