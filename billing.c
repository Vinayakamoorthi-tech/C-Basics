#include <stdio.h>

#define TAX_RATE 0.05      // 5% tax
#define FESTIVE_DISCOUNT 0.10 // 10% festive season discount

int main() {
    char itemName[100];
    int numberOfItems;
    float pricePerItem, totalAmount, taxAmount, discountAmount, finalAmount;

    // Get input from the user
    printf("Enter the item name: ");
    fgets(itemName, sizeof(itemName), stdin); // using fgets to allow for spaces in item name

    printf("Enter the number of items: ");
    scanf("%d", &numberOfItems);

    printf("Enter the price per item: ");
    scanf("%f", &pricePerItem);

    // Calculate total amount
    totalAmount = numberOfItems * pricePerItem;

    // Calculate tax amount
    taxAmount = totalAmount * TAX_RATE;

    // Calculate total with tax
    float totalWithTax = totalAmount + taxAmount;

    // Calculate festive season discount
    discountAmount = totalWithTax * FESTIVE_DISCOUNT;

    // Calculate final amount after discount
    finalAmount = totalWithTax - discountAmount;

    // Display the results
    printf("\n--- Invoice ---\n");
    printf("Item Name: %s", itemName);
    printf("Number of Items: %d\n", numberOfItems);
    printf("Price per Item: %.2f\n", pricePerItem);
    printf("Total Amount: %.2f\n", totalAmount);
    printf("Tax Amount: %.2f\n", taxAmount);
    printf("Total with Tax: %.2f\n", totalWithTax);
    printf("Festive Discount: %.2f\n", discountAmount);
    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}
