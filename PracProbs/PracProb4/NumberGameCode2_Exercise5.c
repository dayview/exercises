#include <stdio.h>

int main(){

    int inputState = 0, num;

    while (inputState < 7){
        printf("Enter a number: ");
        scanf("%d", &num);

        if ((inputState == 0 && num == 1) || (inputState == 1 && num == 1) || (inputState == 2 && num == 1) || (inputState == 3 && num == 1) || (inputState == 4 && num == 1) || (inputState == 5 && num == 2) || (inputState == 6 && num == 1) || (inputState == 7 && num == 2)){
           inputState++;
        } else {
            inputState = 0;
        }
    }

    printf("You entered the sequence 1, 1, 1, 1, 2, 1, 2.\n");

    return 0;
}