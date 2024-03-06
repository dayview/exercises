#include <stdio.h>

void displayStart(){
    int nChoice;

    printf("Welcome to Tic-Tac-Toe!\n\n");
    printf("How many players will be playing?\n");

    printf("----------------------\n");
    printf("| [1] Two Players    |\n");
    printf("| [2] Three Players  |\n");
    printf("| [3] Exit Game   |\n");
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

void printBoard(int board){
	// print board visualization
	// use modulo to handle row/col printing

    printf("\n");
    for(int i = 0; i < 5; i++){
        printf(" ");
        for(int j = 0; j < 5; j++){
            
            int shift = (5 * i + j) * 2;
            int isolateCell = 3 << shift;
            int cell = (board & isolateCell) >> shift;

            char symbol;
            if(cell == 0){
                symbol = ' ';
            } else if(cell == 1){
                symbol = 'X';
            } else if(cell == 2){
                symbol = 'O';
            } else {
                symbol = 'Y';

                printf("%c", symbol);
            }
            printf("\n");
        }
        printf("\n");
    }
	
}

int getMove(int board, int player){
	// Get and validate move choice
	// Return data from 1-25 or A-Y

    while(1){
        printBoard(board);
        printf("Player %d, enter your move (Row and Column): ", player);

        int row, col;
        scanf("%d %d", &row, &col);

        if (row < 1 || row > 5 || col < 1 || col > 5){
            printf("Invalid move. Please try again.\n");
        } else {
            int space = (row - 1) * 5 + (col - 1);
            if (board & (1 << space)){
                printf("Space already taken. Please try again.\n");
            } else {
                board = board | (1 << space);
                return space;
            }
        }
    }
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