#ifndef _TTT_H
#define _TTT_H
#define WIDTH 1
#define LENGTH 3

using namespace std;

int checkBoundary(int a)
{
    if ((a < 3))
        return 1;

    return 0;
}

void displayBoard(char board[][3])
{
    cout << "-------------";
    for (int i = 0; i < LENGTH; i++)
    {
        cout << endl;
        cout << "| ";
        for (int j = 0; j < LENGTH; j++)
        {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------";
    }
    cout << endl;
}

void makeAMove(char move[][3], char mark)
{
    int c = 0, r = 0;
    cout << "Enter a row (0, 1, 2) for player X: " << endl;
    cin >> r;

    if (checkBoundary(r))
    {
        cout << "Enter a column (0, 1, 2) for player X: " << endl;
        cin >> c;
    }
    move[c][r] = mark;
}

/*
bool isWon(char, char[][3]);
bool isDraw(char[][3]);
void displayBoard(char[][3]);
void makeAMove(char[][3], char);
*/

#endif