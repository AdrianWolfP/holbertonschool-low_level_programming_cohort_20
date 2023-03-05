#include "function_pointers.h"
/**
 *array_iterator - executes
 *@array: array
 *@size: size of array
 *@action: pointer to fn that returns nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
