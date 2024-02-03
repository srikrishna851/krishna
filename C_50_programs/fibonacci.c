#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,sum=0;
	printf("enter a number:");
	scanf("%d",&num);

	for(int i=0;i<num;i++)
	{
		 printf("%d ",n1);
		sum=n1+n2;
		n1=n2;
		n2=sum;

	}
}


