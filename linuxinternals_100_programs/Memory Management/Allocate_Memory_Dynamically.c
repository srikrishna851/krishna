// Allocate Memory Dynamically:

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
    printf("Dynamically allocated memory value: %d\n", *ptr);
    free(ptr);
    return 0;
}

