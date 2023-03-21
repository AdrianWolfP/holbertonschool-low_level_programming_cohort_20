#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at a index
 * @head: starts of list
 * @index: node were using
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; head != NULL && index != 0; index--, head = head->next)
	{
	}
	if (head == NULL)
	return (NULL);
	else
	return (head);
}
