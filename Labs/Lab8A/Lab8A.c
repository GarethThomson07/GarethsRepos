// Include necessary headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10 // Maximum grid size

char board[MAX_SIZE][MAX_SIZE];
void initializeBoard(char board[MAX_SIZE][MAX_SIZE], int size);
void printBoard(char board[MAX_SIZE][MAX_SIZE], int size);
void playerMove(char board[MAX_SIZE][MAX_SIZE], int size, char player);
void aiMove(char board[MAX_SIZE][MAX_SIZE], int size);
int checkWin(char board[MAX_SIZE][MAX_SIZE], int size);
int checkDraw(char board[MAX_SIZE][MAX_SIZE], int size);
int updateScore(int *scoreX, int *scoreO, char winner);
int ModeOption(void);
int SizeOption(void);

int scoreX = 0;
int scoreO = 0;
int size = 0;
int mode = 0;
char playAgain;
char player;
char current;

int main()
{
    int yes;
    yes = 1;
    for (yes = 1; yes <= 1; yes++)
    {
        printf(" TIC-TAC-TOE GAME\n Current Score \n");
        printf("- x: %i, O: %i", scoreX, scoreO);
        ModeOption();
        SizeOption();
        initializeBoard(board, size);
        while (checkWin(board, size) == 0 && checkDraw(board, size) == 0)
        {
            playerMove(board, size, player);
        }
        printf("Score => X: %d | O: %d\n", scoreX, scoreO);
        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);
        if (playAgain == 'y' || playAgain == 'Y')
        {
            yes = 0;
        }
    }
}

int SizeOption(void)
{
    printf("Enter board size (3 to 10): ");
    scanf("%d", &size);
    if (size < 3 || size > 10)
    {
        printf("Invalid size, defaulting to 3 by 3.\n");
        size = 3;
    }
}
int ModeOption(void)
{
    printf("select game mode \n 1. player vs player \n 2. player vs AI \n Enter choice (1 or 2):");
    scanf("%d", &mode);
}

void initializeBoard(char board[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char board[MAX_SIZE][MAX_SIZE], int size)
{
    int a;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            a = board[i][j];
            printf("%i", a);
            if (j < size - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < size - 1)
        {
            for (int j = 0; j < size; j++)
                printf("---");
            printf("\n");
        }
    }
}

void playerMove(char board[MAX_SIZE][MAX_SIZE], int size, char player)
{
    int r, c;
    printf("Enter row and column (1–%d): ", size);
    scanf("%d %d", &r, &c);
    r--;
    c--;
    if (r >= 0 && r < size && c >= 0 && c < size && board[r][c] == ' ')
    {
        board[r][c] = player;
    }
    else
    {
        printf("Invalid move, try again.\n");
    }
}

void aiMove(char board[MAX_SIZE][MAX_SIZE], int size)
{
    int r, c;
    do
    {
        r = rand() % size;
        c = rand() % size;
    } while (board[r][c] != ' ');
    board[r][c] = player;
}

int checkWin(char board[MAX_SIZE][MAX_SIZE], int size)
{
    // Rows
    for (int i = 0; i < size; i++)
    {
        int win = 1;
        for (int j = 0; j < size; j++)
            if (board[i][j] != player)
                win = 0;
        if (win)
            return 1;
    }

    // Columns
    for (int j = 0; j < size; j++)
    {
        int win = 1;
        for (int i = 0; i < size; i++)
            if (board[i][j] != player)
                win = 0;
        if (win)
            return 1;
    }

    // Diagonals
    int diag1 = 1, diag2 = 1;
    for (int i = 0; i < size; i++)
    {
        if (board[i][i] != player)
            diag1 = 0;
        if (board[i][size - 1 - i] != player)
            diag2 = 0;
    }
    if (diag1 || diag2)
        return 1;

    return 0;
}
int checkDraw(char board[MAX_SIZE][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}
int updateScore(int *scoreX, int *scoreO, char winner)
{
    if (winner == 'X')
        (*scoreX)++;
    else if (winner == 'O')
        (*scoreO)++;
}