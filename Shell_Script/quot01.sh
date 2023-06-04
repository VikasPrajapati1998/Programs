#!/bin/bash
# quoting mechanism in shell scripting
echo Hello\; World
echo "I have \$100."
var=10
echo '$var'
echo "$var"
echo '$`var'

# meta character

echo 'Adam $var <1234.*>;[]'

