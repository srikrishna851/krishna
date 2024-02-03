#include <stdio.h>

int main() {
    int n, i, arr[100];

    // Input the range
    printf("Enter the range: ");
    scanf("%d", &n);

    arr[0] = 2;
    arr[1] = 4;

    for (i = 2; i < n; i++) {
        if (i % 2 == 0) {
            // If index is even, add 2 to the previous element
            arr[i] = arr[i - 2] + 2;
        } else {
            // If index is odd, add 4 to the next element
            arr[i] = arr[i - 1] + 4;
        }
    }

    // Print the generated sequence
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

