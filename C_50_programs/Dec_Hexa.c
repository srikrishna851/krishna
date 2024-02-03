#include <stdio.h>

void decimalToHex(int decimalNumber) {
    char hex[20];
    int index = 0;

    // Convert decimal to hexadecimal
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;

        // Convert remainder to hexadecimal character
        if (remainder < 10)
            hex[index++] = remainder + '0';
        else
            hex[index++] = remainder + 'A' - 10;

        decimalNumber /= 16;
    }

    // Print the hexadecimal representation in reverse order
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Call the function to convert and print hexadecimal
    decimalToHex(decimalNumber);

    return 0;
}

