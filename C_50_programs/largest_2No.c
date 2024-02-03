#include <stdio.h>

int main() {
    int num1,num2;

    printf("Enter the numbers num1 num2: ");
    scanf("%d%d", &num1,&num2);
    if(num1>num2)
    {
	    printf("num1 is bigger");
    }
    else
    {
	    printf("num2 is bigger");
    }
}

