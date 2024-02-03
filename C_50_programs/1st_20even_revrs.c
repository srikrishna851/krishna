#include <stdio.h>

int main() {
    int n, i, number;

    // Input the number of elements
    printf("Enter the range of even no: ");
    scanf("%d", &n);
    for(i=20;i>=0;i--)
    {
	    if(i%2==0)
	    {
		    printf("%d ",i);
	    }
    }
}
