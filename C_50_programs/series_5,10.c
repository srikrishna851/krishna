#include <stdio.h>

int main() {
    int n, i, number;

    printf("Enter the number of series: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	    number=n*i;
	    printf("%d ",number);
    }
}

