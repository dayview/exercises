#include <stdio.h>

int main(){

    int inputState = 0, num;

    while (inputState < 4){
        printf("Enter a number: ");
        scanf("%d", &num);

        if ((inputState == 0 && num == 12) || (inputState == 1 && num == 23) || (inputState == 2 && num == 700) || (inputState == 3 && num == 6000)){
           inputState++;
        } else {
            inputState = 0;
        }
    }

    printf("You entered the sequence 12, 23, 700 and 6000.\n");

    return 0;
}