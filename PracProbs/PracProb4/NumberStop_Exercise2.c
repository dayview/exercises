#include <stdio.h>

int main(){


    int num;

    while(1){
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num == 101 || num == 102 || num == 103){
            break;
        }
    }

    return 0;
}