#!/usr/bin/env bash

count=1
while IFS='' read -r LINE
do
	echo "LINE $count:$LINE"
	((count++))
done < "$1"
exit 0
