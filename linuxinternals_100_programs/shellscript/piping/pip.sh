#!/usr/bin/env bash

FILES=`ls -1 | sort -r | head -3`
count=1
for FILE in $FILES
do
	echo "file #$count=$FILE"
	((count++))
done

exit 0
