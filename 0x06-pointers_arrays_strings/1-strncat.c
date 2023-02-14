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
	int index = 0;
	int dest_len = 0;
while (dest[dest_len])
{
dest_len++;
}

	for (index = 0; src[index] && index < n; index++)
		{
		dest[dest_len] = src[index];
		dest_len++;
		}

return (dest);
}
