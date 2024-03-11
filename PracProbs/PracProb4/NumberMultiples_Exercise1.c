#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    for (int i = num2; i <= num3; i++){
        if (i % num1 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}