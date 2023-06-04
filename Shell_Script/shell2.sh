#! /bin/bash
read -p "Enter a : " a
read -p "Enter b : " b
echo "a=$a"
echo "b=$b"
if test $a -gt $b
then
	echo "A is bigger."
else
	echo "B is bigger."
fi

