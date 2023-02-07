/**
*_puts - prints string
*@str: string
*Return: Always 0
*/
#include "main.h"

void _puts(char *str)
{
	int i = 0;
for (i = 0; str[i]; i++)
	_putchar(str[i]);
	_putchar('\n');
}
