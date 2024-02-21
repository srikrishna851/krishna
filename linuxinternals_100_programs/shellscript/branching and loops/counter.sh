 #!/usr/bin/env bash

 from=1
end=$1
for from in $end
do
	echo "count=$from"
	((from++))
done

 echo "for loop ended"
 exit 0

