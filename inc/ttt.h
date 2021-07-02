#ifndef _TTT_H
#define _TTT_H

#define INDEX 3

using namespace std;

/* check if the value entered is within the boundaries (0, 1, 2) */
int checkBoundary(int a, int *b)
{
    *(b - 1);
    if ((a >= 0) && (a < 3))
        return 1;

    return 0;
}

/* display board */
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
    int x = 0, y = 0;

    static int counter = 0;

    /* Check to see if the value entered is greater than or equal to zero, and less than or equal to 3 */
    do
    {
        cout << "Move: " << counter << " Enter a ROW (0, 1, 2) for player [" << mark << "]: ";
        cin >> x;
        counter += 1;
    } while (!checkBoundary(x, &counter));

    /* Check to see if the value entered is greater than or equal to zero, and less than or equal to 3 */
    do
    {
        cout << "Move: " << counter << " Enter a COLUMN (0, 1, 2) for player [" << mark << "]: ";
        cin >> y;
    } while (!checkBoundary(y, &counter));

    /* Insert the new value into the coordinates */
    move[x][y] = mark;
}

bool isWinner(char mark, char ticTacToe[][INDEX])
{
    static int threeInARow = 0;
    int x = 0;
    int y = 0;
    cout << "isWinner(): " << threeInARow++ << endl;
    for (int i = 0; i < INDEX; i++)
    {
        for (int j = 0; j < INDEX; j++)
        {
            /*
            if (ticTacToe[i][j] != ' ')
            {
                switch (ticTacToe[i][j])
                {
                case 'x':
                    x++;
                    cout << "case statement => x " << x << endl;
                    if (x == 3)
                    {
                        cout << "You Won!" << endl;
                        return 1;
                    }
                    break;
                case 'o':
                    y++;
                    cout << "case statement => y " << y << endl;
                    if (y == 3)
                    {
                        cout << "You Won!" << endl;
                        return 1;
                    }
                    break;
                }
            }
            */
            /*
            if (ticTacToe[0][j] == mark)
            {
                cout << "::::" << ticTacToe[0][j] << endl;
                threeInARow++;
                if (threeInARow == 3)
                {
                    cout << mark << " Won!";
                }
                else
                {
                    cout << "There is no winner yet..." << endl;
                }
                return 0;
            }
            */
        }
    }
    return 1;
}
/*
    if (ticTacToe)
    {
        static int x = 0;

        for (int i = 0; i < INDEX; i++)
        {
            for (int j = 0; j < INDEX; j++)
            {
                if ((ticTacToe[i][j] == 'x') || (ticTacToe[i][j] == 'y'))
                {
                    x++;
                    cout << " " << x << "<=x y=>" << x << endl;
                    if (x == 3)
                    {
                        cout << "You won for real" << endl;
                    }
                }
            }
        }
    }
    */

//bool isDraw(char[][3]);
#endif