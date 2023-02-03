/**
*more_numbers - print out numbers
*Return: Always 0
*/

#include "main.h"

void more_numbers(void)
{

	int z;
	int x;
for (x = 0; x < 10; x++)
{
	for (z = 0; z <= 14; z++)
	{
		if (z > 9)
		{
		_putchar((z / 10) + '0');
		}
	_putchar((z % 10) + '0');

	}
_putchar('\n');
}
}
