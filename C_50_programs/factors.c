
#include <stdio.h>

int main() {
    int num;
    // Input the range
    printf("Enter the number to find its factor:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
	    if(num%i==0)
	    {
		    printf("%d ",i);
	    }
    }
}
