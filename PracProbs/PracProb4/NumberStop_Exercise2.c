#include <stdio.h>

int main(){


    int num;
    int countCheck = 1;

    while(countCheck){
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num == 101 || num == 102 || num == 103){
            countCheck = 0;
        }
    }

    return 0;
}