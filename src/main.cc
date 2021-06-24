#include <iostream>
#include <iomanip>
#include "ttt.h"

#define MOVES 9

using namespace std;

void displayBoard(char[][INDEX]);
void makeAMove(char[][INDEX], char);
bool isWon(char, char[][INDEX]);
/*
bool isDraw(char[][3]);
*/

int main(void)
{
	char board[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}};

	displayBoard(board);

	while (1)
	{
		makeAMove(board, 'x');
		displayBoard(board);
		makeAMove(board, 'o');
		displayBoard(board);

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
	}

	/*
		if (isWon('x', board))
		{
			cout << "X player won" << endl;
			return 0;
		} else if(isDraw(board)) {
			cout << "No Winner" << endl;
			return 0;
		}

		or


	/*
	while (true)
	{
		// The first player makes a move
		makeAMove(board, 'X');
		displayBoard(board);
		if (isWon('X', board))
		{
			cout << "X player won" << endl;
			exit(0);
		}
		else if (isDraw(board))
		{
			cout << "No winner" << endl;
			exit(0);
		}

		// The second player makes a move
		makeAMove(board, 'O');
		displayBoard(board);

		if (isWon('O', board))
		{
			cout << "O player won" << endl;
			exit(0);
		}

		else (isDraw(board))
		{
			cout << "No winner" << endl;
			exit(0);
		}
}
		*/

	return 0;
}