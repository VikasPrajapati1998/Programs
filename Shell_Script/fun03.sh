#!/bin/bash

fun () {
	echo "Hello Function user $1 and $2."
	return 10
}
fun Arjun Sudhanshu
var=$?
echo "Valur retur by function :  $var"


