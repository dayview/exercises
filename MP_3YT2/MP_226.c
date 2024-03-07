#include <stdio.h>

int displayStart(){
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
    
    return nChoice;
}

int specialChoice(){
    int nChoice;

    printf("Would you like to play with special rules?\n");
    printf("----------------------\n");
    printf("| [1] Yes            |\n");
    printf("| [2] No             |\n");
    printf("----------------------\n\n");

    printf("Your choice: ");
    scanf("%d", &nChoice);
    
    return nChoice;
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

char getSymbol(int cell){

    if(cell == 0){
        return '0';
    } else if(cell == 1){
        return 'X';
    } else if(cell == 2){
        return 'O';
    } else {
         return 'Y';
    }
}

void printBoard(int a1, int a2, int a3, int a4, int a5, 
				int b1, int b2, int b3, int b4, int b5, 
				int c1, int c2, int c3, int c4, int c5, 
				int d1, int d2, int d3, int d4, int d5, 
				int e1, int e2, int e3, int e4, int e5){
	printf("IN printBoard: a1 = %d", a1);
	
    printf("\n");
    printf(" %c %c %c %c %c\n", getSymbol(a1), getSymbol(a2), getSymbol(a3), getSymbol(a4), getSymbol(a5));
    printf(" %c %c %c %c %c\n", getSymbol(b1), getSymbol(b2), getSymbol(b3), getSymbol(b4), getSymbol(b5));
    printf(" %c %c %c %c %c\n", getSymbol(c1), getSymbol(c2), getSymbol(c3), getSymbol(c4), getSymbol(c5));
    printf(" %c %c %c %c %c\n", getSymbol(d1), getSymbol(d2), getSymbol(d3), getSymbol(d4), getSymbol(d5));
    printf(" %c %c %c %c %c\n", getSymbol(e1), getSymbol(e2), getSymbol(e3), getSymbol(e4), getSymbol(e5));
    printf("\n");
	
}

int getMove(int a1, int a2, int a3, int a4, int a5, 
			int b1, int b2, int b3, int b4, int b5, 
			int c1, int c2, int c3, int c4, int c5, 
			int d1, int d2, int d3, int d4, int d5, 
			int e1, int e2, int e3, int e4, int e5, int player){

//    printBoard(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5);

    while(1){
        printf("Player %d, enter your move (Row and Column): ", player);

        int row, col;
        scanf("%d %d", &row, &col);

        if (row < 1 || row > 5 || col < 1 || col > 5){
            printf("Invalid move. Please try again.\n");
        } else {
            int* space = NULL;
            switch((row - 1) * 5 + col){
                case 1:
                    space = &a1;
                    break;
                case 2:
                    space = &a2;
                    break;
                case 3:
                    space = &a3;
                    break;
                case 4:
                    space = &a4;
                    break;
                case 5:
                    space = &a5;
                    break;
                case 6:
                    space = &b1;
                    break;
                case 7:
                    space = &b2;
                    break;
                case 8:
                    space = &b3;
                    break;
                case 9:
                    space = &b4;
                    break;
                case 10:
                    space = &b5;
                    break;
                case 11:
                    space = &c1;
                    break;
                case 12:
                    space = &c2;
                    break;
                case 13:
                    space = &c3;
                    break;
                case 14:
                    space = &c4;
                    break;
                case 15:
                    space = &c5;
                    break;
                case 16:
                    space = &d1;
                    break;
                case 17:
                    space = &d2;
                    break;
                case 18:
                    space = &d3;
                    break;
                case 19:
                    space = &d4;
                    break;
                case 20:
                    space = &d5;
                    break;
                case 21:
                    space = &e1;
                    break;
                case 22:
                    space = &e2;
                    break;
                case 23:
                    space = &e3;
                    break;
                case 24:
                    space = &e4;
                    break;
                case 25:
                    space = &e5;
                    break;
            }
            if(*space){
                printf("Space already taken. Please try again.\n");
            } else {
                *space = player;
                printf("Player: %d\n", player);
                return (row - 1) * 5 + col;
            }
        }
    }
}

int checkWin(int a1, int a2, int a3, int a4, int a5, 
			int b1, int b2, int b3, int b4, int b5, 
			int c1, int c2, int c3, int c4, int c5, 
			int d1, int d2, int d3, int d4, int d5, 
			int e1, int e2, int e3, int e4, int e5){

    if ((a1 && a2 && a3 && a4 && a5) || 
		(b1 && b2 && b3 && b4 && b5) || 
		(c1 && c2 && c3 && c4 && c5) || 
		(d1 && d2 && d3 && d4 && d5) || 
		(e1 && e2 && e3 && e4 && e5)) {
        return 1;
    }

    if ((a1 && b1 && c1 && d1 && e1) || 
		(a2 && b2 && c2 && d2 && e2) || 
		(a3 && b3 && c3 && d3 && e3) || 
		(a4 && b4 && c4 && d4 && e4) || 
		(a5 && b5 && c5 && d5 && e5)) {
        return 1;
    }

    if ((a1 && b2 && c3 && d4 && e5) || (a5 && b4 && c3 && d2 && e1)) {
        return 1;
    }

    return 0;
}

//void updateBoard(int a1, ..., int player, int move) {
//	if move == space
//        a1 = player
//}

int main(){

int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, 
	b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, 
	c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, 
	d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, 
	e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;
	
    int player = 1;

    int nPlayersChoice = displayStart();
    int nSpecialChoice = specialChoice();
//    setup game based on nPlayerChoice and nSpecialChoice
    displayBoard();
    
    while(!checkWin(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5)){
    	printf("printBoard HERE");
    	printf("%d", a1);
        printBoard(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5);
        int move = getMove(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, player);
        // updateBoard(a1, a2, ..., player, move)
        player = 3 - player;
    }
    
    printBoard(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5);
    printf("Player %d wins!\n", 3 - player);
}
