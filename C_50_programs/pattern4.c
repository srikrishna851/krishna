#include <stdio.h>

int main() {
    int row,col;

    // Input the range
    printf("Enter the row and col: ");
    scanf("%d%d", &row,&col);
    for(int i=1;i<=col;i++)
    {
	    for(int j=1;j<i;j++)
	    {
		    printf(" ");
	    }
	    for(int j=i;j<=row;j++)
	    {
		    printf("B");
	    }
	     printf("\n");
    }
}
