#include <stdio.h>

// Accept annual income and outputs how much that person needs to pay for taxes

float getIncome(float a){
    if(a < 0){
        printf("Invalid input. Try again.\n");
        return -1;
    }

    if(a <= 250000){
        return 0;
    }
    else if(a >= 250001 && a <= 400000){
            return a * 0.15;
    }
        else if(a >= 400001 && a <= 800000){
            return a * 0.20;
    }
        else if(a >= 800001 && a <= 2000000){
            return a * 0.25;
    }
        else if(a >= 2000001 && a <= 8000000){
            return a * 0.30;
    }
        else if(a >= 8000001){
            return a * 0.35;
    }
        else{
            return -1;
    }
}

int main(){

    float a, tax;

    do{
        printf("Annual Income: ");
        scanf("%f", &a);

        tax = getIncome(a);
        if(tax != -1){
            printf("Tax to be paid: %.2f\n", tax);
        }
    } while (tax == -1);

    return 0;
}