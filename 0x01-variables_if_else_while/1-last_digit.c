# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(void)
{
	int n;
	int lastdigit;
stran(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigirt = n % 10;
	if (lastdigit > 5)
{
	printf("Last digit of %d", n);
	printf("%d and is greater than 5\n", lastdigit);
}
	else if (lastdigit == 0)
{
	printf("Last digit of %d", n);
	printf("is %d and is 0\n", lastdigit);
}
	else if (lastdigit < 6)
{
	printf("Last digit of %d", n);
	printf("is %d and is less than 6 and not 0\n", lastdigit);
}
	return (0);
}
