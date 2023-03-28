#include "lists.h"
/**
 * dlistint_len - number of elements are returned in a linked list
 * @h: pointer to linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t numNodes = 0;

	while (temp)
	{
		numNodes++;
		temp = temp->next;
	}
	return (numNodes);
}
