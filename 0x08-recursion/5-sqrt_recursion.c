#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - return square root of a number
*@n: number that calculates the square root
*@y: repeating number
*Return: Square root
*/

int _sqrt(int n, int y);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
*_sqrt - calculates square root
*@n: number that calculates square root
*@y: repeating number
*Return: Square root
*/

int _sqrt(int n, int y)
{
	int sqrt = y * y;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (y);
	return (_sqrt(n, y + 1));
}
