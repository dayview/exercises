#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 5

void displayStart(int *nPlayersChoice, int *nSpecialChoice){
    printf("Welcome to Tic-Tac-Toe!\n\n");
    printf("How many players will be playing?\n");
    printf("----------------------\n");
    printf("| [1] Two Players    |\n");
    printf("| [2] Three Players  |\n");
    printf("| [3] Exit Game      |\n");
    printf("----------------------\n\n");
    printf("Your choice: ");
    scanf("%d", nPlayersChoice);

    if (*nPlayersChoice != 1 && *nPlayersChoice != 2) {
        printf("Exiting game.\n");
    }

    printf("Would you like to play with special rules?\n");
    printf("----------------------\n");
    printf("| [1] Yes            |\n");
    printf("| [2] No             |\n");
    printf("----------------------\n\n");
    printf("Your choice: ");
    scanf("%d", nSpecialChoice);
}

void setupGame(int nPlayersChoice, int nSpecialChoice){
    printf("\nSetting up the game...\n");

    if (nPlayersChoice == 1) {
        printf("Two players will be playing.\n");
    } else {
        printf("Three players will be playing.\n");
    }

    if (nSpecialChoice == 1) {
        printf("Special rules will be used.\n");
    } else {
        printf("No special rules will be applied.\n");
    }

    printf("Game setup complete.\n\n");
}

char getSymbol(int cell){
    if (cell == 0) {
        return ' ';
    } else if (cell == 1) {
        return 'X';
    } else if (cell == 2) {
        return 'O';
    } else {
        return 'Y';
    }
}

void displayBoard(int *a1, int *a2, int *a3, int *a4, int *a5,
                int *b1, int *b2, int *b3, int *b4, int *b5,
                int *c1, int *c2, int *c3, int *c4, int *c5,
                int *d1, int *d2, int *d3, int *d4, int *d5,
                int *e1, int *e2, int *e3, int *e4, int *e5){

    printf("\n A | B | C | D | E\n");
    printf("1  %c| %c| %c| %c| %c\n", getSymbol(*a1), getSymbol(*a2), getSymbol(*a3), getSymbol(*a4), getSymbol(*a5));
    printf(" 6 | 7 | 8 | 9 | 10\n");
    printf("2  %c| %c| %c| %c| %c\n", getSymbol(*b1), getSymbol(*b2), getSymbol(*b3), getSymbol(*b4), getSymbol(*b5));
    printf(" 11| 12| 13| 14| 15\n");
    printf("3  %c| %c| %c| %c| %c\n", getSymbol(*c1), getSymbol(*c2), getSymbol(*c3), getSymbol(*c4), getSymbol(*c5));
    printf(" 16| 17| 18| 19| 20\n");
    printf("4  %c| %c| %c| %c| %c\n", getSymbol(*d1), getSymbol(*d2), getSymbol(*d3), getSymbol(*d4), getSymbol(*d5));
    printf(" 21| 22| 23| 24| 25\n");
    printf("5  %c| %c| %c| %c| %c\n", getSymbol(*e1), getSymbol(*e2), getSymbol(*e3), getSymbol(*e4), getSymbol(*e5));
}

int getMove(int *a1, int *a2, int *a3, int *a4, int *a5,
            int *b1, int *b2, int *b3, int *b4, int *b5,
            int *c1, int *c2, int *c3, int *c4, int *c5,
            int *d1, int *d2, int *d3, int *d4, int *d5,
            int *e1, int *e2, int *e3, int *e4, int *e5,
            int player, int nPlayersChoice, int nSpecialChoice){
                
    char row, col;
    int rowNum, colNum;

    while (1) {
        printf("Player %d, enter your move (e.g., A1, B3): ", player);
        scanf(" %c%c", &row, &col);

        if (row >= 'a' && row <= 'e') {
            rowNum = row - 'a' + 1;
        } else if (row >= 'A' && row <= 'E') {
            rowNum = row - 'A' + 1;
        } else {
            printf("Invalid row. Please try again.\n");
            continue;
        }

        if (col >= '1' && col <= '5'){
            colNum = col - '0';
        } else {
            printf("Invalid move. Please try again.\n");
            continue;
        }

        if (rowNum < 1 || rowNum > BOARD_SIZE || colNum < 1 || colNum > BOARD_SIZE){
            printf("Invalid move. Please try again.\n");
        } else {
            int *space = NULL;
            switch (rowNum){
                case 1:
                    switch (colNum){
                        case 1:
                            space = a1;
                            break;
                        case 2:
                            space = a2;
                            break;
                        case 3:
                            space = a3;
                            break;
                        case 4:
                            space = a4;
                            break;
                        case 5:
                            space = a5;
                            break;
                    }
                    break;
                case 2:
                    switch (colNum){
                        case 1:
                            space = b1;
                            break;
                        case 2:
                            space = b2;
                            break;
                        case 3:
                            space = b3;
                            break;
                        case 4:
                            space = b4;
                            break;
                        case 5:
                            space = b5;
                            break;
                    }
                    break;
                case 3:
                    switch (colNum){
                        case 1:
                            space = c1;
                            break;
                        case 2:
                            space = c2;
                            break;
                        case 3:
                            space = c3;
                            break;
                        case 4:
                            space = c4;
                            break;
                        case 5:
                            space = c5;
                            break;
                    }
                    break;
                case 4:
                    switch (colNum){
                        case 1:
                            space = d1;
                            break;
                        case 2:
                            space = d2;
                            break;
                        case 3:
                            space = d3;
                            break;
                        case 4:
                            space = d4;
                            break;
                        case 5:
                            space = d5;
                            break;
                    }
                case 5:
                    switch (colNum){
                        case 1:
                            space = e1;
                            break;
                        case 2:
                            space = e2;
                            break;
                        case 3:
                            space = e3;
                            break;
                        case 4:
                            space = e4;
                            break;
                        case 5:
                            space = e5;
                            break;
                    }
                    break;
            }

            if (*space != 0){
                printf("That space is already taken. Please try again.\n");
            } else {
                *space = player;
                return (rowNum - 1) * BOARD_SIZE + colNum;
            }
        }
    }
}
 
int checkWin(int a1, int a2, int a3, int a4, int a5,
            int b1, int b2, int b3, int b4, int b5,
            int c1, int c2, int c3, int c4, int c5,
            int d1, int d2, int d3, int d4, int d5,
            int e1, int e2, int e3, int e4, int e5){
    
    int player;

    // Check rows
    player = a1;
    if (player != 0 && player == a2 && player == a3 && player == a4 && player == a5) 
    return player;

    player = b1;
    if (player != 0 && player == b2 && player == b3 && player == b4 && player == b5) 
    return player;

    player = c1;
    if (player != 0 && player == c2 && player == c3 && player == c4 && player == c5) 
    return player;

    player = d1;
    if (player != 0 && player == d2 && player == d3 && player == d4 && player == d5) 
    return player;

    player = e1;
    if (player != 0 && player == e2 && player == e3 && player == e4 && player == e5) 
    return player;

    // Check columns
    player = a1;
    if (player != 0 && player == b1 && player == c1 && player == d1 && player == e1)
    return player;

    player = a2;
    if (player != 0 && player == b2 && player == c2 && player == d2 && player == e2)
    return player;

    player = a3;
    if (player != 0 && player == b3 && player == c3 && player == d3 && player == e3)
    return player;

    player = a4;
    if (player != 0 && player == b4 && player == c4 && player == d4 && player == e4)
    return player;

    player = a5;
    if (player != 0 && player == b5 && player == c5 && player == d5 && player == e5)
    return player;

    // Check diagonals
    player = a1;
    if (player != 0 && player == b2 && player == c3 && player == d4 && player == e5)
    return player;
    
    player = a5;
    if (player != 0 && player == b4 && player == c3 && player == d2 && player == e1) 
    return player;

    return 0;
}

void updateBoard(int *space, int player){
    *space = player;
}

int main(){
    int nPlayersChoice, nSpecialChoice;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, 
        b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, 
        c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, 
        d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, 
        e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;
    int player = 1, winner = 0;

    displayStart(&nPlayersChoice, &nSpecialChoice);
    setupGame(nPlayersChoice, nSpecialChoice);

    while (!checkWin(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5)){
        displayBoard(&a1, &a2, &a3, &a4, &a5, 
                    &b1, &b2, &b3, &b4, &b5, 
                    &c1, &c2, &c3, &c4, &c5, 
                    &d1, &d2, &d3, &d4, &d5, 
                    &e1, &e2, &e3, &e4, &e5);
        int move = getMove(&player, &nPlayersChoice, &nSpecialChoice, &a1, &a2, &a3, &a4, &a5, &b1, &b2, &b3, &b4, &b5, &c1, &c2, &c3, &c4, &c5, &d1, &d2, &d3, &d4, &d5, &e1, &e2, &e3, &e4, &e5);
        updateBoard(&move, player);
        player = 4 - player;
    }

    displayBoard(&a1, &a2, &a3, &a4, &a5, 
                &b1, &b2, &b3, &b4, &b5, 
                &c1, &c2, &c3, &c4, &c5, 
                &d1, &d2, &d3, &d4, &d5, 
                &e1, &e2, &e3, &e4, &e5);
    printf("Player %d wins!\n", 4 - player);
    return 0;
}