#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 5

void displayStart(int *numPlayers, int *useSpecialRules){
    printf("Welcome to Tic-Tac-Toe!\n\n");
    printf("How many players will be playing?\n");
    printf("----------------------\n");
    printf("| [1] Two Players    |\n");
    printf("| [2] Three Players  |\n");
    printf("----------------------\n\n");
    printf("Your choice: ");
    scanf("%d", numPlayers);

    printf("Would you like to play with special rules?\n");
    printf("----------------------\n");
    printf("| [1] Yes            |\n");
    printf("| [2] No             |\n");
    printf("----------------------\n\n");
    printf("Your choice: ");
    scanf("%d", useSpecialRules);
}

void setupGame(int numPlayers, int useSpecialRules){
    printf("\nSetting up the game...\n");

    if (numPlayers == 1) {
        printf("Two players will be playing.\n");
    } else {
        printf("Three players will be playing.\n");
    }

    if (useSpecialRules == 1) {
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
    printf("   6 | 7 | 8 | 9 | 10\n");
    printf("2  %c| %c| %c| %c| %c\n", getSymbol(*b1), getSymbol(*b2), getSymbol(*b3), getSymbol(*b4), getSymbol(*b5));
    printf("   11| 12| 13| 14| 15\n");
    printf("3  %c| %c| %c| %c| %c\n", getSymbol(*c1), getSymbol(*c2), getSymbol(*c3), getSymbol(*c4), getSymbol(*c5));
    printf("   16| 17| 18| 19| 20\n");
    printf("4  %c| %c| %c| %c| %c\n", getSymbol(*d1), getSymbol(*d2), getSymbol(*d3), getSymbol(*d4), getSymbol(*d5));
    printf("   21| 22| 23| 24| 25\n");
    printf("5  %c| %c| %c| %c| %c\n", getSymbol(*e1), getSymbol(*e2), getSymbol(*e3), getSymbol(*e4), getSymbol(*e5));
}

int getPlayerMove(int *a1, int *a2, int *a3, int *a4, int *a5,
            int *b1, int *b2, int *b3, int *b4, int *b5,
            int *c1, int *c2, int *c3, int *c4, int *c5,
            int *d1, int *d2, int *d3, int *d4, int *d5,
            int *e1, int *e2, int *e3, int *e4, int *e5,
            int player){
                
    char row, col;
    int rowNum, colNum;

    while (1) {
        printf("Player %d, enter your move (e.g., A1, B3) or 0 for special ability: ", player);
        scanf(" %c%c", &row, &col);

        if (row >= 'a' && row <= 'e') {
            rowNum = row - 'a' + 1;
        } else if (row >= 'A' && row <= 'E') {
            rowNum = row - 'A' + 1;
        } else {
            printf("Invalid row. Please try again.\n");
        }

        if (rowNum > 0 && col >= '1' && col <= '5'){
            colNum = col - '0';
        } else {
            printf("Invalid move. Please try again.\n");
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
                    break;
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

int *findSpacePointer(int *a1, int *a2, int *a3, int *a4, int *a5,
                      int *b1, int *b2, int *b3, int *b4, int *b5,
                      int *c1, int *c2, int *c3, int *c4, int *c5,
                      int *d1, int *d2, int *d3, int *d4, int *d5,
                      int *e1, int *e2, int *e3, int *e4, int *e5,
                      int row, int col){
    int *space = NULL;
    switch (row){
        case 1:
            switch (col){
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
            switch (col){
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
            switch (col){
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
            switch (col){
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
            break;
        case 5:
            switch (col){
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
    return space;
}

void handleSpecialAbility(int *a1, int *a2, int *a3, int *a4, int *a5,
                          int *b1, int *b2, int *b3, int *b4, int *b5,
                          int *c1, int *c2, int *c3, int *c4, int *c5,
                          int *d1, int *d2, int *d3, int *d4, int *d5,
                          int *e1, int *e2, int *e3, int *e4, int *e5,
                          int player, int *eraseSpaceUsed) {
    int choice, row, col;
    printf("Player %d, choose an ability:\n", player);
    printf("----------------------\n");
    printf("| [1] Erase a Space    |\n");
    printf("| [2] Erase 5 Spaces   |\n");
    printf("----------------------\n\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the row and column of the space you want to erase (e.g., A1, B3): ");
        char rowChar, colChar;
        scanf(" %c%c", &rowChar, &colChar);
        row = rowChar - 'A' + 1;
        col = colChar - '0';

        if (row >= 1 && row <= BOARD_SIZE && col >= 1 && col <= BOARD_SIZE) {
            int *space = findSpacePointer(a1, a2, a3, a4, a5,
                                          b1, b2, b3, b4, b5,
                                          c1, c2, c3, c4, c5,
                                          d1, d2, d3, d4, d5,
                                          e1, e2, e3, e4, e5,
                                          row, col);

            if (*space != 0 && *space != player) {
                *space = 0;
                printf("Space erased successfully.\n");
            } else {
                printf("Invalid space or your own space. Try again.\n");
            }
        } else {
            printf("Invalid move. Please try again.\n");
        }
    } else if (choice == 2 && !*eraseSpaceUsed) {
        int option;
        printf("Choose an option:\n");
        printf("--------------------------------------\n");
        printf("| [1] Erase a Row                    |\n");
        printf("| [2] Erase a Column                 |\n");
        printf("--------------------------------------\n\n");
        printf("Your choice: ");
        scanf("%d", &option);

        if (option == 1) {
            printf("Enter the row to erase (1 - 5): ");
            scanf("%d", &row);
            if (row >= 1 && row <= BOARD_SIZE) {
                // Erase the row
                switch (row) {
                    case 1:
                        *a1 = 0;
                        *a2 = 0;
                        *a3 = 0;
                        *a4 = 0;
                        *a5 = 0;
                        break;
                    case 2:
                        *b1 = 0;
                        *b2 = 0;
                        *b3 = 0;
                        *b4 = 0;
                        *b5 = 0;
                        break;
                    case 3:
                        *c1 = 0;
                        *c2 = 0;
                        *c3 = 0;
                        *c4 = 0;
                        *c5 = 0;
                        break;
                    case 4:
                        *d1 = 0;
                        *d2 = 0;
                        *d3 = 0;
                        *d4 = 0;
                        *d5 = 0;
                        break;
                    case 5:
                        *e1 = 0;
                        *e2 = 0;
                        *e3 = 0;
                        *e4 = 0;
                        *e5 = 0;
                        break;
                }
                printf("Row %d erased successfully.\n", row);
            } else {
                printf("Invalid row. Please try again.\n");
            }
        } else if (option == 2) {
            printf("Enter the column to erase (1 - 5): ");
            scanf("%d", &col);
            if (col >= 1 && col <= BOARD_SIZE) {
                // Erase the corresponding column
                switch (col) {
                    case 1:
                        *a1 = 0;
                        *b1 = 0;
                        *c1 = 0;
                        *d1 = 0;
                        *e1 = 0;
                        break;
                    case 2:
                        *a2 = 0;
                        *b2 = 0;
                        *c2 = 0;
                        *d2 = 0;
                        *e2 = 0;
                        break;
                    case 3:
                        *a3 = 0;
                        *b3 = 0;
                        *c3 = 0;
                        *d3 = 0;
                        *e3 = 0;
                        break;
                    case 4:
                        *a4 = 0;
                        *b4 = 0;
                        *c4 = 0;
                        *d4 = 0;
                        *e4 = 0;
                        break;
                    case 5:
                        *a5 = 0;
                        *b5 = 0;
                        *c5 = 0;
                        *d5 = 0;
                        *e5 = 0;
                        break;
                }
                printf("Column %d erased successfully.\n", col);
            } else {
                printf("Invalid column. Please try again.\n");
            }
        } else {
            printf("Invalid option. Please try again.\n");
        }
        *eraseSpaceUsed = 1;
    } else {
        printf("Invalid choice or ability already used. Please try again.\n");
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

    if (a1 != 0 && a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0 && 
        b1 != 0 && b2 != 0 && b3 != 0 && b4 != 0 && b5 != 0 && 
        c1 != 0 && c2 != 0 && c3 != 0 && c4 != 0 && c5 != 0 && 
        d1 != 0 && d2 != 0 && d3 != 0 && d4 != 0 && d5 != 0 && 
        e1 != 0 && e2 != 0 && e3 != 0 && e4 != 0 && e5 != 0){
            return -1;
        }
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
    int gameEnded = 0;
    int eraseSpaceUsed = 0;

    displayStart(&nPlayersChoice, &nSpecialChoice);
    setupGame(nPlayersChoice, nSpecialChoice);

    while (!gameEnded){     
        displayBoard(&a1, &a2, &a3, &a4, &a5, 
                     &b1, &b2, &b3, &b4, &b5, 
                     &c1, &c2, &c3, &c4, &c5, 
                     &d1, &d2, &d3, &d4, &d5, 
                     &e1, &e2, &e3, &e4, &e5);
        int move = getPlayerMove(&a1, &a2, &a3, &a4, &a5, 
                                 &b1, &b2, &b3, &b4, &b5, 
                                 &c1, &c2, &c3, &c4, &c5, 
                                 &d1, &d2, &d3, &d4, &d5, 
                                 &e1, &e2, &e3, &e4, &e5, player);
        updateBoard(&move, player);
        player = (player % nPlayersChoice - 1) + 1;

        winner = checkWin(a1, a2, a3, a4, a5, 
                          b1, b2, b3, b4, b5, 
                          c1, c2, c3, c4, c5, 
                          d1, d2, d3, d4, d5, 
                          e1, e2, e3, e4, e5);
                            if (winner == -1){
                                printf("It's a draw!\n");
                                gameEnded = 1;
                            } else if (winner){
                                printf("Player %d wins!\n", winner);
                                gameEnded = 1;
                            }
    }
    return 0;
}