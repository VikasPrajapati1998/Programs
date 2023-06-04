#! /bin/bash
a=0
while test $a -le 10
do
	echo "$a"
	a=`expr $a + 1`
	sleep 1
done

