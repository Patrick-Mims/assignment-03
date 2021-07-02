#include <iostream>
#include <iomanip>
#include "ttt.h"

#define MOVES 9

using namespace std;

void displayBoard(char[][INDEX]);
void makeAMove(char[][INDEX], char);
bool isWon(char, char[][INDEX]);

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
		isWinner('x', board);

		makeAMove(board, 'o');
		displayBoard(board);
		isWinner('o', board);
	}
	return 0;
}