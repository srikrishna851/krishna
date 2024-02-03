#include <stdio.h>

int main() {
    int n, i, number;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to make zero
    printf("Enter the number to make zero: ");
    scanf("%d", &number);

    // Make all occurrences of the specified number zero
    for (i = 0; i < n; i++) {
        if (arr[i] == number) {
            arr[i] = 0;
        }
    }

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

