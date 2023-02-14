#include "main.h"
/**
*_strpbrk - searchesa string for a set of bytes
*@s: string
*@accept: characters to compare
*Return: pointer from initial segment of match
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			return (s + i);
			}
		}
	}
return (0);
}
