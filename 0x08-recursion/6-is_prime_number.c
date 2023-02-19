#include "main.h"
/**
*is_prime_number - runs square root recursion and returns the results
*@n: number
*@y: prime numbers
*Return: Sqaure root but with prime numbers only
*/

int _prime(int n, int y);
/**
*_prime - checks if input is square root
*/

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

int _prime(int n, int y)
{
	if (n <= 1)
		return (0);

	if (n % y == 0 && y < 1)
		return (0);
	if ((n / y) < y)
		return (1);
	return (_prime(n, y + 1));
}
