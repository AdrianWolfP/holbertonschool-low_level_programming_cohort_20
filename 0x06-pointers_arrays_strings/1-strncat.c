#include "holberton.h"
#include <string.h>

/**
*_strncat - concatenates two strings
*@dest: destination char
*@src: source char
*@n: number of bytes from src
*Return: New string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int index;

	while (dest[index++]
	{
		len++;
	}

	for (index = 0; src[index] && index < n; index++)
		dest[len + i] = src[i];
	dest[len++] = src[index];

	return (dest);
}

