#include <stdio.h>

int main() {
    int row,col;

    // Input the range
    printf("Enter the row and col: ");
    scanf("%d%d", &row,&col);
    for(int i=0;i<col;i++)
    {
	    for(int j=0;j<row-i-1;j++)
	    {
		    printf(" ");
	    }
	    for(int j=0;j<=i;j++)
	    {
		    printf("a");
	    }
	     for(int j=0;j<=i;j++)
            {
                    printf("b");
            }

	     printf("\n");
    }
}
