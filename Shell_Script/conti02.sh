#!/bin/bash
for x in {1..20}
do
	if [ `expr $x % 2` -ne 0 ]
	then
		continue
	fi
	echo $x
	sleep .2
done
echo "Program End."

