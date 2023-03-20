#include "lists.h"
/**
 * listint_len - returns elemtns in linked list
 * @h: list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int numNodes = 0;

	while (temp)
	{
		numNode++;
		temp = temp->next;
	}

	return (numNode);
}
