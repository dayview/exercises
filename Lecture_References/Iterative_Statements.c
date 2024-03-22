#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int number, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0){
        printf("Factorial of a negative number doesn't exist.");
    } else {
        for (int i = 1; i <= number; i++){
            factorial *= i;
        }
        printf("Factorial of %d = %d", number, factorial);fo
    }

    return 0;
} // a for loop program calculates the factorial of a number entered by the user

int main(){
    int number, sum = 0;

    printf("Enter positive number (0 to stop):\n");

    while (number > 0){
        scanf("%d", &number);
        sum += number;
    }

    printf("Sum of entered numbers: %d\n", sum);

    return 0;
} // a while program that reads positive numbers from the user until 0 is entered and then prints the sum of the numbers

int main(){
    srand(time(NULL));

    int randomNumber = rand() % 10 + 1;
    int guess, attempts = 3;

    printf("Guess a number between 1 and 10 (You have 3 attempts):\n");

    do{
        scanf("%d", &guess);
        attempts--;

            if (guess == randomNumber){
                printf("Congratulations! You guessed the number in %d attempts.\n", 3 - attempts);
            } else if (attempts > 0){
                printf("Try again! Attempts remaining: %d\n", attempts);
            } else {
                printf("You ran out of attempts. The number was %d\n", randomNumber);
            }
        } while (attempts > 0);

        return 0;
}  // a do-while program that generates a random number between 1 and 10 and asks the user to guess the number. The user has 3 attempts to guess the number correctly.

int main(){
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
} // a for loop nested program that prints a right-angled triangle of asterisks

int main(){
    int number, sum = 0, count = 0;
    double average;

    printf("Enter numbers (enter -1 to stop):\n");

    while (number != -1){
        scanf("%d", &number);

        if (number > 0){
            sum += number;
            count++;
        } else if (number < -1){
            printf("Invalid input. Please enter positive numbers or -1 to stop.\n");
        }
    }

    if (count > 0){
        average = sum / count;
        printf("Average of Positive Numbers: %.2lf\n", average);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
} // a while loop program that reads a list of numbers entered by the user, stopping when the user enters -1
// then calculates the average of the positive numbers entered

int main(){
    int num1, num2, temp;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    do {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    } while (temp != 0);

    printf("GCD of %d and %d is %d\n", num1, num2, num1);

    return 0;
} // a do-while loop program that calculates the greatest common divisor of two positive integers entered by the user