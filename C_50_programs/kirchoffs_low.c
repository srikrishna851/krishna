#include <stdio.h>

int main() {
    int i1,i2,i3,i4,i5,i6;

    // Input the number of elements
    printf("Enter the values of incomming current i1 i2 i4 i5:");
    scanf("%d%d%d%d", &i1,&i2,&i4,&i5);
    printf("enter the value of outgoing current i3 and i6:");
    scanf("%d%d",&i3,&i6);
    int a=i1+i2+i4+i5;
    int b=i3+i6;
    if(a==b)
    {
	    printf("it is kirchoff's low");
    }
    else
    {
	     printf("it is not kirchoff's low");
    }
}
