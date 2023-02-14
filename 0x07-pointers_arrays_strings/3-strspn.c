#include "main.h"
/**
*_strspn - gets length of a prefix substring
*@s: initial segment
*@accept: accepted bytes
*Return: the number of accepted bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int t = 0;
	unsigned int b;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
				b++;
		}
			a++;
	}
return (t);
}
