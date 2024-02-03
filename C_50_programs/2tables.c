#include <stdio.h>

int main() {
    int n, i;

    // Input the range
    printf("Enter the range multiplication of 2table: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
            printf("2*%d=%d\n",i,2*i);
    }
}

