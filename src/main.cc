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
		cout << "From main: " << board[0][1] << endl;
		displayBoard(board);

		if (isWon('o', board))
		{
			cout << "X player won" << endl;
			return 0;
		}
	}

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