#include <stdio.h>

void displayStart(){
    int nChoice;

    printf("Welcome to Tic-Tac-Toe!\n\n");
    printf("How many players will be playing?\n");

    printf("----------------------\n");
    printf("| [1] Two Players    |\n");
    printf("| [2] Three Players  |\n");
    printf("----------------------\n\n");

    printf("Your choice: ");
    scanf("%d", &nChoice);
}

void specialChoice(){
    int nChoice;

    printf("Would you like to play with special rules?\n");
    printf("----------------------\n");
    printf("| [1] Yes            |\n");
    printf("| [2] No             |\n");
    printf("----------------------\n\n");

    printf("Your choice: ");
    scanf("%d", &nChoice);
}

void displayBoard(){
    printf("\n 1 | 2 | 3 | 4 | 5\n");
    printf("---|---|---|---|---\n");
    printf(" 6 | 7 | 8 | 9 | 10\n");
    printf("---|---|---|---|---\n");
    printf(" 11| 12| 13| 14| 15\n");
    printf("---|---|---|---|---\n");
    printf(" 16| 17| 18| 19| 20\n");
    printf("---|---|---|---|---\n");
    printf(" 21| 22| 23| 24| 25\n");
    printf("---|---|---|---|---\n");
}

void printBoard(){
	// print board visualization
	// use modulo to handle row/col printing
	
}

int getMove(){
	// Get and validate move choice
	// Return data from 1-25 or A-Y
}

void makeMove(int space){
	// Set board space to current player
	// Rotate current player
}

int checkWin(){
	// Check all possible win directions
	// Return 0 if no win
	// Return current player if they won
}

int main(){

    displayStart();
    specialChoice();
    displayBoard();
	
	while(!checkWin()){
		printBoard();
		int move = getMove();
		makeMove(move);
	}
	
    // Print final board and winner
}