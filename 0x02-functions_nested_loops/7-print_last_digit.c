/**
* print_last_digit - Enrty point
* @r: is number
* Return: Always 0
*/
#include "main.h"

int print_last_digit(int r)
{
int last = r % 10;

if (r < 0)
	last = -last;
_putchar(last + '0');
return (last);
}
