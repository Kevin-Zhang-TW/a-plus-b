#!/bin/sh

SOL=${1:-"../code/sol.cpp"}
dest="./"

g++ -std=c++17 $SOL -DKEV -fsanitize=undefined -o sol.bin

for i in ./*.in
do
	./sol.bin < $i > ${i%.*}.out
done
