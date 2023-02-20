#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers that are pulled from argv
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int var1 = 0;
	int var2 = 0;
	int sum = 0;

if (argc < 3)
{
	printf("Error\n");
	return (1);
}
else
{
	var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);
	sum = var1 * var2;
	printf("%d\n", sum);
}

return (0);
}
