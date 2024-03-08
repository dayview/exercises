// nested-if statement
if (condition1 && condition2){
    // code to execute if both condition1 and condition2 are true
}
if (condition1 || condition2){
    // code to execute if either condition1 or condition2 is true
}
if (!condition){
    // code to execute if the condition is false
}

// if-else statement
if (condition){
    // code to execute if the condition is true
}
else {
    // code to exzecute if the condition is false
}

// if-else-if statement
if (condition1){
    // code to execute if condition1 is true
}
else if (condition2){
    // code to exzecute if condition1 is false and condition2 is true
}

if (condition){
    // code to execute if the condition is true
}

// nested if-else statement
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

// combination of if, if-else, and else conditional statements
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

// for loop - best used when you know the number of iterations in advance
for (initialization; condition; increment/decrement) {
    // code to be executed
}

// while loop - best used when the number of iterations is not known in advance, 
// and you want to continue looping as long as a certain condition is true
while (condition) {
    // code to be executed
}

// do-while loop - best used when you want to execute the code block at least once,
// and then continue looping as long as a certain condition is true
do {
    // code to be executed
} while (condition);

// for loop example
sample main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

sample main() {
    int num;
    double factorial = 1.0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %.0lf\n", num, factorial);
    return 0;
}

// while loop
sample main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

sample main() {
    int num, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    while (num >= 0) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        num--;
    }

    return 0;
}

// do-while loop
sample main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}

sample main() {
    int num, sum = 0;

    do {
        printf("Enter a number (enter a negative number to stop): ");
        scanf("%d", &num);

        if (num >= 0) {
            sum += num;
        }
    } while (num >= 0);

    printf("Sum of entered numbers = %d\n", sum);
    return 0;
}

