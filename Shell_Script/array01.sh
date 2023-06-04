#! /bin/bash
fruit[0]="Apples"
fruit[1]="Orange"
fruit[2]="Berries"
fruit[3]="Banana"
fruit[4]="Mango"
echo "First Element : ${fruit[0]}"
echo "Third Element : ${fruit[2]}"
echo "All elements of array : ${fruit[*]}"
echo "All elements of array : ${fruit[@]}"

