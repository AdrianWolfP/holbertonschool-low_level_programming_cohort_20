#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list
 * Return: nodes
 */

size_t print_dlistint(const slistint_t *h)
{
	const slistint_t *temp = h;
	int numNodes = 0;

	while (temp)
	{
		printf("%i\n", temp->n);
		numNodes++;
		temp = temp->next;
	}

	return (numNodes);
}
