#include <stdio.h>

int product(int a, int b, int c){
    return a * b * c;
}

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The product of all possible pairs is: %d\n", product(a, b, c));
    return 0;
}