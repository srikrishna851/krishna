#include <stdio.h>

int main() {
    int num1,num2,num3;

    // Input the number of elements
    printf("Enter 3  number num1 num2 num3 ");
    scanf("%d%d%d",&num1,&num2, &num3);
    if(num1>=num2 && num1>=num3)
    {
	    printf("num1 is bigger%d:",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
	    printf("num2 is bigger%d:",num2);
    }
    else
    {
	    printf("num3 is bigger%d:",num3);
    }
}
