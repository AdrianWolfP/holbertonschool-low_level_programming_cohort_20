/**
*print_rev - prints it backwards
*@s: string
*Return: Always 0
*/

#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int i = 0;
	int lenth = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
