#include<stdio.h>
int main ()
{
	int a,b,c,sum;
	float avg;
	printf("enter a three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("average of 3 numbers is:%f",avg);
}
