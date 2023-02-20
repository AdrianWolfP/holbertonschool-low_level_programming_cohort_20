#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
