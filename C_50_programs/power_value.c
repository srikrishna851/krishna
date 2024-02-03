#include<stdio.h>
int main()
{
	int p,i,r;
	printf("enter a value of current and resistence:");
	scanf("%d%d",&i,&r);
	p=i*i*r;
	printf("power=%d",p);
}
