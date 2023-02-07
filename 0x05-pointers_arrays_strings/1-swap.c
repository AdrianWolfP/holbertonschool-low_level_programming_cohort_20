/**
*swap_int - swaping values of two integers
*@a: pointer 1
*@b: pointer 2
*Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
