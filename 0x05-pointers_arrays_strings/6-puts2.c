#include "main.h"
#include <stdio.h>
/**
*puts2 - prints out an alternating chars of sting
*@str: string
*Return: Always 0
*/

void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
