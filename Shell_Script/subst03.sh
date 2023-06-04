#!/bin/bash
echo -e "Variable Substitution.\n"
echo ${var:-"Apples"}
echo -e "I Love ${var}"
echo ${var:="Orange"}
echo -e "But I also love ${var}"
unset var

echo ${var:+"Bananas"}
echo -e "$var is healthy."

var="Kiwi"
echo ${var:+"This is default value."}
echo "Healthiest fruit is $var"
echo ${var:?"Print this message"}
echo "I eat ${var}"

unset var
echo ${var:+"This is default value."}
echo ${var:?"Variable is not seted."}
echo "I eat ${var}"

echo ${var:-"varible exist."}
var=5
echo ${var:-"varible exit."}

