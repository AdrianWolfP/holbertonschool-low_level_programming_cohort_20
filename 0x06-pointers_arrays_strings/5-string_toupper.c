#include "holberton.h"
/**
*string_toupper - in the string lowercase letters are chanced to upper
*@str: string that'll be chanced
*Return: a pointer to the string after it been changed
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
