float getInputAndAddVAT(){
    float price;
    scanf("%f", &price);
    return price * 1.2;
}

float computeOrderRunningTotal(float p, float t){
    return t + p;
}

float showTotalPrice(float t){
    printf("The total price is: %.2f", t);
}
