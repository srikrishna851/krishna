   #!/usr/bin/env bash
 
   colour=$1
   if [ $colour = "blue" ]
   then
	   echo "the colour is blue"
   else
	   echo "the colour is not blue" 
   fi


   user_guess=$2
   computer=50

   if  [ $user_guess -lt $computer ]
   then
	   echo "you 're too low"
   elif [ $user_guess -gt $computer ]
   then
	   echo "you 're too high"
   else
	   echo "your 're guessed it"
   fi
   

