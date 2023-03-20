#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: print of list
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int numNodes = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		numNodes++;
	}

	return (numNodes);
}
