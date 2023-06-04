#!/bin/bash
for a in {1..1000}
do
	if [ $a -gt 10 ]
	then
		break
	fi
	echo $a
	a=`expr $a + 1`
	sleep .5
done
echo "Program End."

