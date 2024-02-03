#include <stdio.h>

// Function to convert a decimal number to 4-bit binary-coded representation
void decimalToBinary4Bits(int num) {
    printf("Decimal: %d\nBinary: ", num);

    // Loop through each bit position
    for (int i = 3; i >= 0; i--) {
        // Use bitwise AND to extract the i-th bit
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert to 4-bit binary and print
    decimalToBinary4Bits(decimalNumber);

    return 0;
}

