#include <stdio.h>

int main() {
    int n, i, number;

    // Input the number of elements
    printf("Enter the range of odd no: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	    if(i%2==1)
	    {
		    printf("%d",i);
	    }
    }
}
