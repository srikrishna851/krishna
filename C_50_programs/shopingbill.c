#include <stdio.h>

// Function to calculate the total cost for a shopping item
float calculateTotal(float quantity, float unitPrice) {
    return quantity * unitPrice;
}

int main() {
    int numItems;

    // Input the number of items
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    // Arrays to store information for each item
    float quantity[numItems];
    float unitPrice[numItems];

    // Input quantity and unit price for each item
    for (int i = 0; i < numItems; i++) {
        printf("Enter quantity for item %d: ", i + 1);
        scanf("%f", &quantity[i]);

        printf("Enter unit price for item %d: ", i + 1);
        scanf("%f", &unitPrice[i]);
    }

    // Calculate and print the total billing amount
    float totalAmount = 0;
    for (int i = 0; i < numItems; i++) {
        float itemTotal = calculateTotal(quantity[i], unitPrice[i]);
        totalAmount += itemTotal;

        printf("Item %d - Quantity: %.2f, Unit Price: %.2f, Total: %.2f\n", i + 1, quantity[i], unitPrice[i], itemTotal);
    }

    printf("Total Billing Amount: %.2f\n", totalAmount);

    return 0;
}

