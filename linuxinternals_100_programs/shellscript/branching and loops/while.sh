 #!/usr/bin/env bash

 count=0
 upto=$1
 while [ $count -lt $upto ]
 do
	 echo "count=$count"
	 ((count++))

 done

 echo "while loop exicuted"
 exit 0

