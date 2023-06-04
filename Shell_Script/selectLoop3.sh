#!/bin/bash
PS3="Enter a choice : "
select choice in Apple Banana Pineapple Grape Mango exit
do
	case $choice in
		Apple)
			echo "Eat Apple."
			;;
		Banana)
			echo "Take Banana Shake."
			;;
		Pineapple)
			echo "Eat Pineapple."
			;;
		Grape)
			echo "Eat Grapes."
			;;
		Mango)
			echo "Take Mango Shake."
			;;
		exit)
			echo "Exit."
			break
			;;
		*)
			echo "Error : Please try again."
			;;
	esac
done
echo "Program End"

