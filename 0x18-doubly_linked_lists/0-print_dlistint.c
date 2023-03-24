#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int Nodes = 0;

	while (temp)
	{
		printf("%i\n", temp->n);
		Nodes++;
		temp = temp->next;
	}

	return (Nodes);
}
