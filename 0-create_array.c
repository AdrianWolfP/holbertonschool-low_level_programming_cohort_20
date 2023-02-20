#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of a character
 * @size: size of array
 * @c: character to fill the array
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *pointer;

	pointer = malloc(size * sizeof(char));

	if (size == 0)
		{
		return (NULL);
		}

	if (pointer == 0)
		{
		return (NULL);
		}

	for (index = 0; index < size; index++)
		{
		pointer[index] = c;
		}
	return (pointer);
}
