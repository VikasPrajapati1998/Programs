#! /bin/bash
# conditional programming
a=$1
b=$2
if test $a -gt $b
then
	echo "A is greater than B"
elif test $a -lt $b
then
	echo "B is greater than A"
else
	echo "Both are equal"
fi
echo "Default argument = $@"
echo "Number of argument = $#"

