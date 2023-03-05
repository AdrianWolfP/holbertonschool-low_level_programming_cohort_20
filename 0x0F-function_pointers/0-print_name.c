#include "function_pointers.h"
/**
 *print_name - prints name ans choose what print
 *@name: pointer to name
 *@f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
