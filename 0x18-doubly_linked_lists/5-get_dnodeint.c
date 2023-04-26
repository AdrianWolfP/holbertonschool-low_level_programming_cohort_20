#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns node of list
 * @head: head node of list
 * @index: node to return
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
