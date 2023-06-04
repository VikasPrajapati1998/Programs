#! /bin/bash
a=1
while [ $a -le 100 ]
do
	echo -n "$a, "
	if [ `expr $a % 10` -eq 0 ]
	then
		echo ""
		sleep .5
	fi

	a=`expr $a + 1`
#	sleep .5
done
echo ""

