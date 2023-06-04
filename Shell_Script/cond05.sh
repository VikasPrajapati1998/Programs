#! /bin/bash
# odd even program
echo "Enter a integer to know its odd or even."
read -p 'Number : ' num
if test `expr $num % 2` -eq 0
then
	echo "$num is even."
else
	echo "$num is odd."
fi
echo "Program End."

