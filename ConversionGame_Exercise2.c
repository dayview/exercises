#include <stdio.h>

int main() {
    float price_gold_1, price_gold_2;
    int discount = 20; // Percentage discount (represented as an integer)

    printf("Enter the price of item 1 in ounces of gold: ");
    scanf("%f", &price_gold_1);

    printf("Enter the price of item 2 in ounces of gold: ");
    scanf("%f", &price_gold_2);

    // Conversion rates (all stored in integers for brevity)
    int silver_per_gold = 10;
    int bronze_per_silver = 50;
    int copper_per_bronze = 150;

    // Calculate prices in other metals for item 1
    int price_silver_1 = price_gold_1 * silver_per_gold;
    int price_bronze_1 = price_silver_1 * bronze_per_silver;
    int price_copper_1 = price_bronze_1 * copper_per_bronze;

    // Calculate prices in other metals for item 2
    int price_silver_2 = price_gold_2 * silver_per_gold;
    int price_bronze_2 = price_silver_2 * bronze_per_silver;
    int price_copper_2 = price_bronze_2 * copper_per_bronze;

    // Apply discount (avoiding floating-point calculations)
    price_gold_1 = price_gold_1 * (100 - discount) / 100;
    price_gold_2 = price_gold_2 * (100 - discount) / 100;

    price_silver_1 = price_silver_1 * (100 - discount) / 100;
    price_silver_2 = price_silver_2 * (100 - discount) / 100;

    price_bronze_1 = price_bronze_1 * (100 - discount) / 100;
    price_bronze_2 = price_bronze_2 * (100 - discount) / 100;

    price_copper_1 = price_copper_1 * (100 - discount) / 100;
    price_copper_2 = price_copper_2 * (100 - discount) / 100;

    // Print original prices
    printf("\nOriginal Prices:\n");
    printf("Item 1: %d gold, %d silver, %d bronze, %d copper\n",
           (int)price_gold_1, price_silver_1, price_bronze_1, price_copper_1);
    printf("Item 2: %d gold, %d silver, %d bronze, %d copper\n",
           (int)price_gold_2, price_silver_2, price_bronze_2, price_copper_2);

    // Print discounted prices
    printf("\nDiscounted Prices:\n");
    printf("Item 1: %d gold, %d silver, %d bronze, %d copper\n",
           (int)price_gold_1, price_silver_1, price_bronze_1, price_copper_1);
    printf("Item 2: %d gold, %d silver, %d bronze, %d copper\n",
           (int)price_gold_2, price_silver_2, price_bronze_2, price_copper_2);

    return 0;
}
