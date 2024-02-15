#include <stdio.h>

float getInvestment(){
    float investment;
    printf("Enter the investment amount: ");
    scanf("%f", &investment);
    return investment;
}

float getInterestRate(int monthNumber){
    float interestRate;
    printf("Enter the interest rate for Month %d (%%): ", monthNumber);
    scanf("%f", &interestRate);
    return interestRate;
}

float computeAndShowNewInvestmentTotal(float investment, float interestRate){
    float newInvestmentTotal = investment + (investment * interestRate);
    printf("The new investment total is: %.2f\n", newInvestmentTotal);
    return newInvestmentTotal;
}