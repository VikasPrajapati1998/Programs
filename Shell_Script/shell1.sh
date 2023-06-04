#! /bin/bash
a=$1
b=$2

echo "a = $a"
echo "b = $b"

# addition
c=`expr $a + $b`
echo "Addition of a + b = $c"
# substraction
c=`expr $a - $b`
echo "Substraction of a - b = $c"
# multiplication
c=`expr $a \* $b`
echo "Multiplication of a * b = $c"
# division
c=`expr $a / $b`
echo "Division of a / b = $c"
# modulus
c=`expr $a % $b`
echo "Remainder of a % b = $c"
# equality
c=`expr $a == $b`
echo "Equality of a == b = $c"
# not equality
c=`expr $a != $b`
echo "Not Equality of a != b = $c"
# assignment
c=$a
echo "a = $c"


