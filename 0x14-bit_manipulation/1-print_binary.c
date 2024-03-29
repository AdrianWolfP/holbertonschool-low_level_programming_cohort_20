#include "main.h"
/**
 * print_binary - prints
 * @n: number
 * Return: number
 */

void print_binary(unsigned long int n)
{
	if (n >> 1 == 0)
	{
		_putchar(n - 2 * (n >> 1) + '0');
		return;
	}

	print_binary(n >> 1);

	_putchar(n - 2 * (n >> 1) + '0');
}
