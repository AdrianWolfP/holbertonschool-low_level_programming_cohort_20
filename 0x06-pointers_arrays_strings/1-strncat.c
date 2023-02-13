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
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] && i < n != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = src[i];

	return (dest);
}

