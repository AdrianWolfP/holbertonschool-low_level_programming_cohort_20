#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array unsing malloc
 * @nmemb: number of members
 * @size: size of things passed
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int index = 0;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (index = 0; index < nmemb * size; index++)
		pointer[index] = 0;

	return (pointer);
}
