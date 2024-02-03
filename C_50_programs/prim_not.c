#include <stdio.h>

int main() {
    int num;

    // Input the range
    printf("Enter the number: ");
    scanf("%d", &num);
    int count=0;
    for(int i=2;i<=num;i++)
    {
	    if(num%i==0)
	    {
		   count++;
	    }
    }
    if(count==1)
    {
	    printf("it is a prime number");
    }
    else
    {
	    printf("it is not a prime number");
    }

}
