// Read and Write to Dynamically Allocated Memory:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    *ptr = 10;
    printf("Original value: %d\n", *ptr);
    *ptr = 20;
    printf("Updated value: %d\n", *ptr);
    free(ptr);
    return 0;
}

