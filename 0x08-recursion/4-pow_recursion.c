#include "main.h"
/**
*_pow_recursion - return value of x rasiedto the power of y
*@x: interger
*@y: power
*Return: x to y
*/

int _pow_recursion(int x, int y)
{

	if (y == 0)
	return (1);

	else if (y < 0)
	return (-1);
/*
* following recursively calls itself with the same value of x and
*  decrements y by 1 each time, until y reaches 0
*/
	else
	return (x * _pow_recursion(x, y - 1));
}
