#include "main.h"
/**
*_print_rev_recursion - prints string out in reverse
*@s: pointer to string
*Return: the string in reverse
*/

void _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}
