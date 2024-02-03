#include <stdio.h>
#include <math.h>

int hexToDecimal(char hex[]) {
    int decimalNumber = 0;
    int length = 0;

    // Calculate the length of the hexadecimal number
    while (hex[length] != '\0') {
        length++;
    }

    // Convert each hexadecimal digit to decimal
    for (int i = 0; hex[i] != '\0'; i++) {
        int digitValue;

        if (hex[i] >= '0' && hex[i] <= '9') {
            digitValue = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digitValue = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digitValue = hex[i] - 'a' + 10;
        } else {
            // Invalid hexadecimal digit
            printf("Invalid hexadecimal digit: %c\n", hex[i]);
            return -1;
        }

        // Update the decimal number
        decimalNumber += digitValue * pow(16, length - 1 - i);
    }

    return decimalNumber;
}

int main() {
    char hex[20];

    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Call the function to convert and print decimal
    int decimalNumber = hexToDecimal(hex);
    if (decimalNumber != -1) {
        printf("Decimal: %d\n", decimalNumber);
    }

    return 0;
}

