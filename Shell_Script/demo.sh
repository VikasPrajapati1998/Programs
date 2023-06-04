#!/bin/bash

read -p "Enter a number : " num

if $num; then
	echo "$num is true."
else
	echo "$num is false."
fi

