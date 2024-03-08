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

// switch statement
sample main() {
    int choice;
    printf("1. Print Hello\n");
    printf("2. Print World\n");
    printf("3. Print Hello World\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("World\n");
            break;
        case 3:
            printf("Hello World\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

// nested if-else statement
sample main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num <= 50) {
            printf("The number is between 0 and 50.\n");
        } else if (num <= 100) {
            printf("The number is between 51 and 100.\n");
        } else {
            printf("The number is greater than 100.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
