/**
*print_line - draw a line
*@n: an incrementor
*Return: Always 0
*/

#include "main.h"

void print_line(int n)
{
char line = '_';
int z = 0;
if (n > 0)
{
	while (z < n)
	{
		_putchar(line);
		z++;
	}
}
_putchar('\n');
}
