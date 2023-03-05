#include "3-calc.h"
/**
 *get_op_func - function that selects
 *@s: operator passed
 *Return: Always 0
 */

int (*get_op_func(char *s))(int, int) {

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (strlen(s) != 1)
		return (NULL);

	while (ops[i].op != NULL && s[0] != ops[i].op[0])
		i++;

	return (ops[i].f);
}
