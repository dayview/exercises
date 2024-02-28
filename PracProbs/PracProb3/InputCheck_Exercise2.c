#include <stdio.h>

void getInput(int *a, int *b, int *c, int *d, int *e, char *prompt){
    
    printf("%s\n", prompt);
    printf("Enter first number: ");
    scanf("%d", a);

    printf("Enter second number: ");
    scanf("%d", b);

    printf("Enter third number: ");
    scanf("%d", c);

    printf("Enter fourth number: ");
    scanf("%d", d);

    printf("Enter fifth number: ");
    scanf("%d", e);
}

int main(){

    int a, b, c, d, e, f, g, h, i, j;

    getInput(&a, &b, &c, &d, &e, "First User Input");
    getInput(&f, &g, &h, &i, &j, "Second User Input");

    int count = 0;
    count += (a == f);
    count += (b == g);
    count += (c == h);
    count += (d == i);
    count += (e == j);

    printf("The number of same numbers are: %d\n", count);

    return 0;
}