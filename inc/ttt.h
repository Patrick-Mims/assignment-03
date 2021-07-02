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
    int three_in_a_row = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < INDEX; i++)
    {
        for (int j = 0; j < INDEX; j++)
        {
            if ((ticTacToe[j][i] == 'x'))
            {
                three_in_a_row += 1;
                if (three_in_a_row == 3)
                {
                    cout << "x you won!" << endl;
                }
            }
            else if ((ticTacToe[0][i] == 'o'))
            {
                three_in_a_row += 1;
                if (three_in_a_row == 3)
                {
                    cout << "o you won!" << endl;
                }
            }
        }
    }
    return 1;
}
#endif