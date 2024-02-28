#include <stdio.h>
#include "easypractice.h"

main()
{
	float price, total = 0;

	printf("\nEnter the price of your first order: ");
	price = getInputAndAddVAT();
	total = computeOrderRunningTotal(total,price);

	printf("\nEnter the price of your second order: ");
	price = getInputAndAddVAT();
	total = computeOrderRunningTotal(total,price);

	printf("\nEnter the price of your third order: ");
	price = getInputAndAddVAT();
	total = computeOrderRunningTotal(total,price);
	
	showTotalPrice(total);
}
