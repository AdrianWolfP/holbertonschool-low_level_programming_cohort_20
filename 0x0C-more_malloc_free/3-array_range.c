#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - range of array
 *@min: the min
 *@max: the max
 *Return: Always 0
 */

int *array_range(int min, int max)
{
	int index = 0;
	int *pointer = 0;

	if (min > max)
		return (NULL);

	pointer = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (pointer == NULL)
		return (NULL);

	while (min <= max)
	{
	pointer[index] = min;
	index++;
	min++;
	}

	return (pointer);

}
