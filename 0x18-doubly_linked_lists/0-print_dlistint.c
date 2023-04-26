#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
