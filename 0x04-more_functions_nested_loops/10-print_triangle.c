/**
*print_triangle - makes a triangle
*@size: smol
*Return: Always 0
*/

#include "main.h"

void print_triangle(int size)
{
int z;
int i;
int x;
if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		z = 1;
		z += i;
		for (x = 1; x <= size; x++)
		{
			if (size <= z)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			z++;
		}
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
