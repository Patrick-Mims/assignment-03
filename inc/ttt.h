#ifndef _TTT_H
#define _TTT_H

#define INDEX 3

using namespace std;

int checkBoundary(int a)
{
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
    int c = 0, i = 0, r = 0;
    static int counter = 0;

    do
    {
        cout << "[" << counter << "]"
             << "Enter a ROW (0, 1, 2) for player [ X ]: " << endl;
        cin >> r;
        counter += 1;
    } while (!checkBoundary(r));

    do
    {
        cout << "[" << counter << "]"
             << "Now enter a COLUMN (0, 1, 2) for player [ X ]: " << endl;
        cin >> c;
        counter += 1;
    } while (!checkBoundary(c));

    move[c][r] = mark;
}

/*
bool isWon(char, char[][3]);
bool isDraw(char[][3]);
*/
#endif