#include <stdio.h>

char board[3][3]; // The 3x3 game board
char player = 'X'; // The current player

// Function to display the game board
void displayBoard()
{
    printf("-------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if the game has been won
int checkWin()
{
    // Check rows for win
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
    }
    // Check columns for win
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    // Check diagonals for win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;
    return 0;
}

// Function to check if the game is a draw
int checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

// Function to switch the current player
void switchPlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

int main()
{
    // Initialize the game board
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    // Display the initial game board
    displayBoard();

    // Main game loop
    int row, col;
    while (1)
    {
        // Get the row and column from the current player
        printf("Player %c, enter row and column (e.g. 1 2): ", player);
        scanf("%d %d", &row, &col);

        // Check if the chosen cell is already occupied
        if (board[row-1][col-1] != ' ')
        {
            printf("That cell is already occupied, please choose a different cell\n");
            continue;
        }

        // Place the current player's symbol on the chosen cell
        board[row-1][col-1] = player;

        // Display the updated game board
        displayBoard();

        // Check if the game has been won
        if (checkWin())
        {
            printf("Player %c has won the game!\n", player);
            break;
        }

        // Check if the game is a draw
        if (checkDraw())
        {
            printf("The game is a draw!\n");
            break;
        }

        // Switch the current player
        switchPlayer();
    }
}
