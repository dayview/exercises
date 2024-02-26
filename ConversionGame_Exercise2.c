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

    int silverPrice1 = goldPrice1 * silverPerGold;
    int bronzePrice1 = silverPrice1 * bronzePerSilver;
    int copperPrice1 = bronzePrice1 * copperPerBronze;

    int silverPrice2 = goldPrice2 * silverPerGold;
    int bronzePrice2 = silverPrice2 * bronzePerSilver;
    int copperPrice2 = bronzePrice2 * copperPerBronze;

    int goldPrice1 = goldPrice1 * (100 - discount) / 100;
    int goldPrice2 = goldPrice2 * (100 - discount) / 100;

    int silverPrice1 = silverPrice1 * (100 - discount) / 100;
    int silverPrice2 = silverPrice2 * (100 - discount) / 100;

    int bronzePrice1 = bronzePrice1 * (100 - discount) / 100;
    int bronzePrice2 = bronzePrice2 * (100 - discount) / 100;

    int copperPrice1 = copperPrice1 * (100 - discount) / 100;
    int copperPrice2 = copperPrice2 * (100 - discount) / 100;

    printf("\nOriginal Prices:\n");
    printf("Item 1: %d gold, %d silver, %d bronze, %d copper\n",
           (goldPrice1, silverPrice1, bronzePrice1, copperPrice1);
    printf("Item 2: %d gold, %d silver, %d bronze, %d copper\n",
           (goldPrice2, silverPrice2, bronzePrice2, copperPrice2);

    // Print discounted prices
    printf("\nDiscounted Prices:\n");
    printf("Item 1: %d gold, %d silver, %d bronze, %d copper\n",
           (goldPrice1, silverPrice1, bronzePrice1, copperPrice1);
    printf("Item 2: %d gold, %d silver, %d bronze, %d copper\n",
           (goldPrice2, silverPrice2, bronzePrice2, copperPrice2);

    return 0;
}
