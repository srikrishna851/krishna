#include <stdio.h>

int main() {
    int n, i, arr[100];

    // Input the range
    printf("Enter the range multiplication of 3table: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	    printf("3*%d=%d\n",i,3*i);
    }
}

