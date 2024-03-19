#include <stdio.h>

int main(){

    int getAnswer, score = 0, mistakes = 0;
    int continueLoop = 1;

    while(continueLoop){

    printf("Welcome to Jeremiah's Life!\n");
    printf("To get you started, this is a game on how you know Jeremiah well!\n");

        printf("Question 1: What is Jeremiah's last name?\n");
        printf("1. Manilao\n");
        printf("2. Manalo\n");
        printf("3. Carilao\n");
        printf("4. Anilao\n");

        printf("Answer: ");
        scanf("%d", &getAnswer);

        if (getAnswer == 4){
            printf("Not gonna lie ah medyo tama ka!\n");
            score++;
        } else if (getAnswer == 1){
            printf("Gyatt!\n");
            mistakes++;
        } else if (getAnswer == 2){
            printf("Jeremiah nya nya!\n");
            mistakes++;
        } else {
            printf("Rozzy chill!\n");
            mistakes++;
        }

        if (mistakes == 2){
            printf("You have reached the maximum number of mistakes!\n");
            continueLoop = 0;
        }

        printf("Question 2: What is Jeremiah's favorite color?\n");
        printf("1. Red\n");
        printf("2. Blue\n");
        printf("3. Green\n");
        printf("4. Yellow\n");

        printf("Answer: ");
        scanf("%d", &getAnswer);

        if (getAnswer == 1){
            printf("Not gonna lie ah medyo tama ka!\n");
            score++;
        } else if (getAnswer == 2){
            printf("Rozzy chill!\n");
            mistakes++;
        } else if (getAnswer == 3){
            printf("Gyat!\n");
            mistakes++;
        } else {
            printf("Jeremiah nya nya!\n");
            mistakes++;
        }

        if (mistakes == 2){
            printf("You have reached the maximum number of mistakes!\n");
            continueLoop = 0;
        }

        printf("Question 3: What is Jeremiah's favorite food?\n");
        printf("1. Adobo\n");
        printf("2. Afritada\n");
        printf("3. Sinigang\n");
        printf("4. Kare-Kare\n");

        printf("Answer: ");
        scanf("%d", &getAnswer);

        if (getAnswer == 2){
            printf("Not gonna lie ah medyo tama ka!\n");
            score++;
        } else if (getAnswer == 1){
            printf("Gyat!\n");
            mistakes++;
        } else if (getAnswer == 3){
            printf("Jeremiah nya nya!\n");
            mistakes++;
        } else {
            printf("Rozzy chill!\n");
            mistakes++;
        }

        if (mistakes == 2){
            printf("You have reached the maximum number of mistakes!\n");
            continueLoop = 0;
        }

        printf("Question 4: Where is Jeremiah's workplace?\n");
        printf("1. Team Secret");
        printf("2. TNC");
        printf("3. Fnatic");
        printf("4. Mineski");

        printf("Answer: ");
        scanf("%d", &getAnswer);
        
        if (getAnswer == 1){
            printf("Not gonna lie ah medyo tama ka!\n");
            score++;
        } else if (getAnswer == 2){
            printf("Gyat!\n");
            mistakes++;
        } else if (getAnswer == 3){
            printf("Jeremiah nya nya!\n");
            mistakes++;
        } else {
            printf("Rozzy chill!\n");
            mistakes++;
        }
        
        if (mistakes == 2){
            printf("You have reached the maximum number of mistakes!\n");
            continueLoop = 0;
        }
        int finalScore = score;
        printf("Score: %d\n", finalScore);
    }

    return 0;

    }
