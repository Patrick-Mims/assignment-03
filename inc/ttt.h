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
    int x = 0, y = 0;

    static int counter = 0;

    /* Check to see if the value entered is greater than or equal to zero, and less than or equal to 3 */
    do
    {
        cout << "[" << counter << ">"
             << "Enter a ROW (0, 1, 2) for player [" << mark << "]: ";
        cin >> x;
        counter += 1;
    } while (!checkBoundary(x, &counter));

    /* Check to see if the value entered is greater than or equal to zero, and less than or equal to 3 */
    do
    {
        cout << "[" << counter << ">"
             << "Enter a COLUMN (0, 1, 2) for player [" << mark << "]: ";
        cin >> y;
    } while (!checkBoundary(y, &counter));

    /* Insert the new value into the coordinates */
    move[x][y] = mark;
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
    /*
		if (board)
		{
			static int x = 0;

			for (int i = 0; i < INDEX; i++)
			{
				for (int j = 0; j < INDEX; j++)
				{
					if ((board[i][j] == 'x') || (board[i][j] == 'y'))
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

    return 0;
}

//bool isDraw(char[][3]);
#endif