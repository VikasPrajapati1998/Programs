#! /bin/bash
a=0
until [ ! $a -le 10 ]
do
	echo $a
	a=`expr $a + 1`
	sleep .2
done

