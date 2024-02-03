#include<stdio.h>
int main()
{
    /* code */
    int num,sum=0,rem=0;
    printf("enter a givn number:");
    scanf("%d",&num);
    int temp=num;
    while (num !=0)
    {
        /* code */
        rem=num%10;
        sum=sum*10+rem;
        num =num/10;
    }
    if (sum==temp)
    {
   
    
    printf("given no  is pallndrom no");
    }
    else
    {
      printf("given no is not a pallandrom no");   
    }
    return 0;
}

