#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    printf("Enter fourth number: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d){
        printf("The largest number is: %d\n", a);
    } else if (b > a && b > c && b > d){
        printf("The largest number is: %d\n", b);
    } else if (c > a && c > b && c > d){
        printf("The largest number is: %d\n", c);
    } else {
        printf("The largest number is: %d\n", d);
    }

    return 0;
}