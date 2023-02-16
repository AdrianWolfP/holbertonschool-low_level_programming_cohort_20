#include "main.h"
/**
* _puts_recursion - prints a string on a new line
*@s: string that gets passed through
*Returns: a string
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}

}
