#!/bin/bash

# function creation in shell scripting
# nested funtion

number_one () {
	echo "This is a first function."
	number_two
}
number_two () {
	echo "This is the second function."
	number_three
}
number_three () {
	echo "This is the third function."
}

number_one

