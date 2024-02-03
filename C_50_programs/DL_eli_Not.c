#include <stdio.h>

int main() {
    int age;

    // Input the number of elements
    printf("Enter the age of parson:");
    scanf("%d", &age);
    if(age>=18)
    {
	    printf("parson is eligible for DL");
    }
    else
    {
	                printf("parson is not eligible for DL");
    }
}
