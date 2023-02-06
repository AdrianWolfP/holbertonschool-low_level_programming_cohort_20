/**
*print_square - draws a square
*@size: smol
*Return: Always 0
*/

#include "main.h"
void print_square(int size)
{
char square = '#';
int z1;
int z2;
if (size > 0)
{
for (z1 = 0; z1 < size; z1++)
	{
	for (z2 = 0; z2 < size; z2++)
		{
		_putchar(square);
		}
	_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
