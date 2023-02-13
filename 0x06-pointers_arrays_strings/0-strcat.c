#include "holberton.h"
#include <stdio.h>

/**
*_strcat - concatentes two strings
*@dest: destination char
*@src: source char 
*Return: New char
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;

	while (dest[destlen] != 0)
	{
		destlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
