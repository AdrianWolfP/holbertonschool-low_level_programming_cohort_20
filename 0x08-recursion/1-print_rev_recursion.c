#include "main.h"
/**
*_puts_rev_recursion - prints string out in reverse
*@s: string
*Return: the string in reverse
*/

void _print_rev_recursion(char *s)
{
	
	if (*s == '\0')
	{
	return;
	}

	s++;
	_print_rev_recursion(*s)
	s--;
	_putchar(*s);
	
}
