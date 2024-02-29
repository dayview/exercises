#include <stdio.h>

int getChoice(){

    int choice;

    printf("Choose a Door (1, 2, or 3): ");
    scanf("%d", &choice);

    return choice;
}

int openDoor(int choice, int prizeDoor){

    int doorOpened;

    if (choice == prizeDoor){
        doorOpened = (choice % 3) + 1;
    } // in this case, if the choice and prizeDoor are not the same, the code inside the else block is executed
    else{ 
        doorOpened = 6 - choice - prizeDoor;
    }

    return doorOpened;
}

int switchDoor(int choice, int doorOpened){

    int newChoice; 

    newChoice = 6 - choice - doorOpened; // this variable (newChoice) is used to store the new choice of the user (after switching doors

    return newChoice;
}

int revealPrize(int choice, int prizeDoor){

    if (choice == prizeDoor){
        printf("Congratulations! You have won a prize!\n");
    }
    else{
        printf("Sorry, you have won nothing.\n");
    }
}

int main(){

    int prizeDoor = 1 + (rand() % 3); // uses random to generate the prize door
    int choice, doorOpened, newChoice;

    choice = getChoice();
    doorOpened = openDoor(choice, prizeDoor);

    printf("Door %d has been opened.\n\n", doorOpened);
    printf("Would you like to switch doors? (1 for Yes, 0 for No): ");
    scanf("%d", &newChoice);

    if (newChoice == 1){
        choice = switchDoor(choice, doorOpened); // function is called with the user's initial choice and opened doors as arguments
    } // ^ the user's final choice is then stored in the choice variable

    revealPrize(choice, prizeDoor); // called with the final choice and prize door as arguments

    return 0;
}