#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char str[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("\n");
    
    fgets(sen, 100, stdin);
    scanf("%[^\n]%*c", str);
       
    printf("%c\n", ch);
    printf("%s", sen);
    printf("%s", str);
    return 0;
}