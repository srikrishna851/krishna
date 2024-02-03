#include <stdio.h>

int main() {
    int n, i, number;

    // Input the number of elements
    printf("Enter the range of natural no: ");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
	printf("%d ",i);
    }
}
