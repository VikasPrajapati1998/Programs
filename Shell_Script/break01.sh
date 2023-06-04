#!/bin/bash
a=1
while [ true ]
do
	if [ $a -gt 10 ]
	then
		break
	fi
	echo "$a"
	a=`expr $a + 1`
	sleep .5
done
echo "Program End."

