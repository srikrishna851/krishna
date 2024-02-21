#!/usr/bin/env bash
status=0
if [ -z $1 ]
then
	echo "please supply a pid"
	exit 1
fi
echo "watchinf pid=$1"
while [ $status -eq 0 ]
do
	ps $1 > /dev/null
	status=$?
done
echo "process $1 has terminated"

