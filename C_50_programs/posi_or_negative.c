#include <stdio.h>

int main() {
    int number;

    // Input the number of elements
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number > 0)
    {
	    printf("given no is positive");
    }
    else if(number < 0)
    {
	   printf("given no is negative");

    }
    else
    {
	     printf("given no is zero");
    }
}

