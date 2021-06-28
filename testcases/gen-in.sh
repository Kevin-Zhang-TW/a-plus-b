#!/bin/sh

dest="./"

for ((i=1;i<=5;++i))
do
	./rand-gen > $i.in
done

./cor-gen > 6.in
