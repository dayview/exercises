#include <stdio.h>

int main(){

    int num, prevNum, count = 0;
    int countCheck = 1;
	
	printf("Enter the first number: ");
    scanf("%d", &num);
    while (countCheck){
    	printf("Enter the succeeding number: ");
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