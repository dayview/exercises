#include <stdio.h>

int main(){
    
    int question1, question2, question3;
    int answer1, answer2, answer3;
    int score = 0;
    
    printf("Welcome to the game! You will be asked three questions. Good luck!\n");
    
    printf("Question 1: What is the name of our professor?\n");
    printf("1. Sir Alain Encarnacion\n2. Sir John Santillana \n3. Miss Jacklyn Beredo\n4. Sir Gary Soriano\n");
    printf("Answer: ");
    scanf("%d", &question1);
    answer1 = 1;
    if (question1 == answer1){
        printf("Correct!\n");
        score++;
    }
    else if (question1 == 2 || question1 == 3 || question1 == 4){
        printf("\nClose, but not quite. The correct answer is 1.\n");
    }
    else{
        printf("\nIncorrect. The correct answer is 1.\n");
        return 0;
    }
    
    printf("\nQuestion 2: What does CCS stand for?\n");
    printf("1. College of Computer Studies\n2. College of Canin at Sinigang\n3. College of Computer Students\n4. College of Computer Strings\n");
    printf("Answer: ");
    scanf("%d", &question2);
    answer2 = 1;
    if (question2 == answer2){
        printf("\nCorrect!\n");
        score++;
    }
    else if (question2 == 2 || question2 == 3 || question2 == 4){
        printf("\nClose, but not quite. The correct answer is 1.\n");
    }
    else{
        printf("\nIncorrect. The correct answer is 1.\n");
        return 0;
    }
    
    printf("\nQuestion 3: Do you think you'll pass CCPROG1?\n");
    printf("1. No\n2. No\n3. Yes\n4. No\n");
    printf("Answer: ");
    scanf("%d", &question3);
    answer3 = 3;
    if (question3 == answer3){
        printf("\nCorrect!\n");
        score++;
    }
    else if (question3 == 1 || question3 == 2 || question3 == 4){
        printf("\nClose, but not quite. The correct answer is 3.\n");
    }
    else{
        printf("\nIncorrect. The correct answer is 3.\n");
        return 0;
    }
    
    if(score == 3){
        printf("Congratulations! See you at CCPROG2! You got all %d questions correct!\n", score);
    }
    else if(score == 2){
        printf("Close, yet so far. You got %d questions correct!\n", score);
    }
    else if(score == 1){
        printf("\nBetter luck next time! You got %d questions correct.\n", score);
    }
    else{
    	printf("\nOops. Looks like you'll fail this class. You got %d question correct.\n", score);
	}

    return 0;
}