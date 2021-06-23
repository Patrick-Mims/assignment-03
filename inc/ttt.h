#ifndef _TTT_H
#define _TTT_H

#define INDEX 3

using namespace std;

int checkBoundary(int a, int *b)
{
    *(b - 1);
    if ((a >= 0) && (a < 3))
        return 1;

    return 0;
}

void displayBoard(char board[][INDEX])
{
    cout << "-------------";
    for (int i = 0; i < INDEX; i++)
    {
        cout << endl;
        cout << "| ";
        for (int j = 0; j < INDEX; j++)
        {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------";
    }
    cout << endl;
}

void makeAMove(char move[][INDEX], char mark)
{
    int i = 0, x = 0, y = 0;

    static int counter = 0;

    do
    {
        cout << "[" << counter << ">"
             << "Enter a ROW (0, 1, 2) for player [ X ]: " << endl;
        cin >> x;
        cout << "[" << counter << ">"
             << "Now enter a COLUMN (0, 1, 2) for player [ X ]: " << endl;
        cin >> y;
        counter += 1;
    } while (!checkBoundary(x, &counter));

    move[x][y] = mark;

    cout << "The true value: " << move[x][y] << endl;
}

bool isWon(char mark, char ticTacToe[][INDEX])
{
    for (int a = 0; a < INDEX; a++)
    {
        for (int b = 0; b < INDEX; b++)
        {
            cout << "BEFORE IF-STATEMENT => " << ticTacToe[a][b] << endl;
            if (ticTacToe[a][b] == mark)
            {
                cout << "TEST - TEST - TEST => " << ticTacToe[a][b] << endl;
                return 1;
            }
        }
    }

    return 0;
}

/*
bool isDraw(char[][3]);
*/
#endif