#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocted space in memory
 * which has a copy of the string as a parameter
 * @str: string to duplicate
 * Return: Copied string
 */

char *_strdup(char *str)
{
	int counter = 0;
	int index = 1;
	char *pointer;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[index])
	{
		index++;
	}

		pointer = malloc((sizeof(char) * index) + 1);

	if (pointer == NULL)
	{
	return (NULL);
	}

	while (counter < index)
	{

		pointer[counter] = str[counter];
		counter++;
	}

		pointer[counter] = '\0';
		return (pointer);

}
