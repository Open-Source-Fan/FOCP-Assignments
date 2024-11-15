#include <stdio.h>

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
int player = 1;
char mark;

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

int main() {
    int choice;
    for (int turn = 0; turn < 9; turn++) {
        displayBoard();
        player = (turn % 2) + 1;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d, enter a number (1-9): ", player);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9 || board[(choice-1)/3][(choice-1)%3] == 'X' || board[(choice-1)/3][(choice-1)%3] == 'O') {
            printf("Invalid move! Try again.\n");
            turn--;
            continue;
        }

        board[(choice-1)/3][(choice-1)%3] = mark;

        if (checkWin()) {
            displayBoard();
            printf("Player %d wins!\n", player);
            return 0;
        }
    }

    displayBoard();
    printf("It's a draw!\n");
    return 0;
}
