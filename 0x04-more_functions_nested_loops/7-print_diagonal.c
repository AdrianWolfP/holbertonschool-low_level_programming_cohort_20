/**
*print_diagonal - draw a diagonal line
*@n: number of times
*Return: Always 0
*/

#include "main.h"
void print_diagonal(int n)
{
char line = '\\';
int z = 0;
int x = 0;

if (n > 0)
{
	for (; z < n; z++)
	{
		for (x = 0; x < z; x++)
		{
			_putchar(' ');
		}
		_putchar(line);
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
