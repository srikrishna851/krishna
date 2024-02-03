#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
            printf("given no is even");
    }
    else
    {
         printf("given no is odd");
    }
}

