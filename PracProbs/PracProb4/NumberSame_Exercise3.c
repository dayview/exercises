#include <stdio.h>

int main(){

    int num, prevNum, count = 0;
    int countCheck = 1;

    scanf("%d", &num);
    while (countCheck){
        scanf("%d", &num);
        if (num == prevNum){
            count++;
            if (count == 4){
                printf("You entered the same number five times in a row.\n");
                countCheck = 0;
            }
        } else {
            count = 0;
        }
        prevNum = num;
    }

    return 0;
}