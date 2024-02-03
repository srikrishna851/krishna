#include <stdio.h>

int main() {
    // Declare variables
    double V, I, R2, R1, R4;

    // Input values
    printf("Enter the voltage (V): ");
    scanf("%lf", &V);

    printf("Enter the current (I): ");
    scanf("%lf", &I);

    printf("Enter the value of R2: ");
    scanf("%lf", &R2);

    printf("Enter the value of R1: ");
    scanf("%lf", &R1);

    // Calculate R4 using the formula
    R4 = (V / I) * (R2 / R1);

    // Output the result
    printf("The value of R4 is: %.2lf\n", R4);

    return 0;
}

