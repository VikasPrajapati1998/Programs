#!/bin/bash
a=0
while [ $a -le 20 ]
do
	a=`expr $a + 1`
	if [ `expr $a % 2` -ne 0 ]
	then
		continue
	fi
	echo $a
	sleep .2
done
echo "Program End."

