#include <iostream>
#include <iomanip>
#include "ttt.h"

#define MOVES 9

using namespace std;

void displayBoard(char[][3]);
void makeAMove(char[][3], char);
/*
bool isWon(char, char[][3]);
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