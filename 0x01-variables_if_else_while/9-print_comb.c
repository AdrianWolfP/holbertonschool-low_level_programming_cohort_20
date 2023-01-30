/**
*main - Entry point
*Return Always 0
*/

#include <std.io>

int main(void)
{
	int c;
for (c = 0; c <= 9; c++)
{
	putchar('0' + c);
if (c != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
