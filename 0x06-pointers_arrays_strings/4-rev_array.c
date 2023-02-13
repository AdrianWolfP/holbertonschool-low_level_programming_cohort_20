#include "holberton.h"
/**
*reverse_array - this reverses the array of integers
*@a: the array of integers that will be reverse
*@n: the number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
