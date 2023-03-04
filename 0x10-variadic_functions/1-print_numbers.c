#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@separator: string
 *@n:so many of numbers to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ap, int));
}
