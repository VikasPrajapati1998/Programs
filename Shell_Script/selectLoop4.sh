#!/bin/bash
a=0
PS3="Enter the day : "
select day in Mon Tue Wed Thru Fri Sat Sun Exit
do
	case $day in
		Mon)
			a=1
			echo "$a.- Monday"	
			;;
		Tue)
			a=2
			echo "$a.- Tuesday"
			;;
		Wed)
			a=3
			echo "$a.- Wednesday"
			;;
		Thru)
			a=4
			echo "$a.- Thrusday"
			;;
		Fri)
			a=5
			echo "$a.- Friday"
			;;
		Sat)
			a=6
			echo "$a.- Saturday"
			;;
		Sun)
			a=7
			echo "$a.- Sunday"
			;;
		Exit)
			echo "Exit"
			break
			;;
		*)
			echo "Invalid Input"
			echo ""
			;;
	esac
done
echo "Program Done...!"

