#!/usr/bin/env bash

count=1

while IFS='' read -r LINE
do
  echo "LINE$count: $LINE"
  if [ $count -ge 3 ]
  then
    break
  fi
  ((count++))
done < "$1"
exit 0
