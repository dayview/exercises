#include <stdio.h>

int main() {
    float goldPrice1, goldPrice2;
    int discount = 20;

    printf("Enter the price of item 1 in ounces of gold: ");
    scanf("%f", &goldPrice1);

    printf("Enter the price of item 2 in ounces of gold: ");
    scanf("%f", &goldPrice2);

    int silverPerGold = 10;
    int bronzePerSilver = 50;
    int copperPerBronze = 150;

    float silverPrice1 = goldPrice1 * silverPerGold;
    float bronzePrice1 = silverPrice1 * bronzePerSilver;
    float copperPrice1 = bronzePrice1 * copperPerBronze;

    float silverPrice2 = goldPrice2 * silverPerGold;
    float bronzePrice2 = silverPrice2 * bronzePerSilver;
    float copperPrice2 = bronzePrice2 * copperPerBronze;

    float goldDiscountedPrice1 = goldPrice1 * (100 - discount) / 100;
    float goldDiscountedPrice2 = goldPrice2 * (100 - discount) / 100;

    float silverDiscountedPrice1 = silverPrice1 * (100 - discount) / 100;
    float silverDiscountedPrice2 = silverPrice2 * (100 - discount) / 100;

    float bronzeDiscountedPrice1 = bronzePrice1 * (100 - discount) / 100;
    float bronzeDiscountedPrice2 = bronzePrice2 * (100 - discount) / 100;

    float copperDiscountedPrice1 = copperPrice1 * (100 - discount) / 100;
    float copperDiscountedPrice2 = copperPrice2 * (100 - discount) / 100;

    printf("\nOriginal Prices:\n");
    printf("Item 1: %.2f gold, %.2f silver, %.2f bronze, %.2f copper\n", goldPrice1, silverPrice1, bronzePrice1, copperPrice1);
    printf("Item 2: %.2f gold, %.2f silver, %.2f bronze, %.2f copper\n", goldPrice2, silverPrice2, bronzePrice2, copperPrice2);

    // Print discounted prices
    printf("\nDiscounted Prices:\n");
    printf("Item 1: %.2f gold, %.2f silver, %.2f bronze, %.2f copper\n", goldDiscountedPrice1, silverDiscountedPrice1, bronzeDiscountedPrice1, copperDiscountedPrice1);
    printf("Item 2: %.2f gold, %.2f silver, %.2f bronze, %.2f copper\n", goldDiscountedPrice2, silverDiscountedPrice2, bronzeDiscountedPrice2, copperDiscountedPrice2);

    return 0;
}
