/**
*_puts - prints string
*@str: string
*Return: Always 0
*/
#include "main.h"

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
putchar(str[i]);
		i++;
	}

putchar('\n');
}
