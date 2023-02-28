#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocated memory so long as there's enough
 * @b: size of memory to allocate
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

pointer = malloc(b);

if (pointer == NULL)
	exit(98);

return (pointer);

}
