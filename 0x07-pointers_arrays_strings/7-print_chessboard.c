#include "main.h"
/**
*print_chessboard - print a whole chessboard
*@a: rows and columns in an array of pieces
*Return: chessboard
*/

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
