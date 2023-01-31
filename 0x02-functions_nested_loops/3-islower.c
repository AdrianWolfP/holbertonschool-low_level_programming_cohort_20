/**
*_islower - Enrty point
*@c: c is a letter
*Return: 0
*/

#include "main.h"

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
