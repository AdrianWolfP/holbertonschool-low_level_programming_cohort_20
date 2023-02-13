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
	int destlen = 0;
	int i;

	while (dest[i++])
		destlen++;
	for (i = 0; src[i] && i < n; i++)
		dest[destlen++] = src[i];
	return (dest);
}

