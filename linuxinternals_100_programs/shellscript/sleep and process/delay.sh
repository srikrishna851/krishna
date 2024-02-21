#!/usr/bin/env bash
delay=$1
if [ -z $delay ]
then
	echo "you must supply a delay"
	exit 0
fi
echo "going to sleep for $delay secondes"
sleep $delay
echo "we are awake now"
exit 0
