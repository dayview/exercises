if (condition1 && condition2){
    // code to execute if both condition1 and condition2 are true
}
if (condition1 || condition2){
    // code to execute if either condition1 or condition2 is true
}
if (!condition){
    // code to execute if the condition is false
}

if (condition){
    // code to execute if the condition is true
}
else {
    // code to exzecute if the condition is false
}

if (condition1){
    // code to execute if condition1 is true
}
else if (condition2){
    // code to exzecute if condition1 is false and condition2 is true
}

if (condition){
    // code to execute if the condition is true
}

sample main(){

    int gradeMark = 83;
    if (gradeMark > 75){
        printf("First Class");
    }
    else if (gradeMark > 65){
        printf("Second Class");
    }
    else if (gradeMark > 55){
        printf("Third Class");
    }
    else {
        printf("Fourth Class");
    }
    return 0;
}

sample main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else if (num < 0) {
        printf("The number is negative.\n");
        if (num % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
