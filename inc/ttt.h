#ifndef _TTT_H
#define _TTT_H
#define WIDTH 5
#define LENGTH 3

using namespace std;

void displayBoard(char board[][3])
{
    int cnt = 0;
    do
    {
        for (int i = 0; i <= LENGTH; i++)
        {
            for (int j = 0; j <= LENGTH; j++)
            {
                cout << "-";
            }
        }
        if (cnt < LENGTH)
            cout << endl
                 << "|" << setw(WIDTH) << "|" << setw(WIDTH) << "|" << setw(WIDTH) << "|" << endl;

        cnt += 1;
    } while (cnt <= LENGTH);
    cout << endl;
}

void makeAMove(char[][3], char)
{
    cout << "Enter a row (0, 1, 2) for player X: " << endl;
}

/*
bool isWon(char, char[][3]);
bool isDraw(char[][3]);
void displayBoard(char[][3]);
void makeAMove(char[][3], char);
*/

#endif