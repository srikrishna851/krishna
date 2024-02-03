#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5;
    float avg;

    // Input the number of elements
    printf("Enter the student marks of 5 subject:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    avg=(float)(s1+s2+s3+s4+s5)/5;
    printf("%f",avg);
    if(avg>80)
    {
	    printf("student grade is:A");
    }
    else if(avg>60)
    {
	    printf("student grade is:B"); 
    }
    else if(avg>40)
    {
	     printf("student grade is:C");
    }
    else
    {
	     printf("student grade is:D");
    }
}
