#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node into list
 * @head: start of list
 * @index: index to node
 * @n: value of n
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *ptr;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (add_nodeint(head, n));

	for (ptr = *head; index - 1 > 0 && ptr != NULL; ptr->next, index--)
	{
	}

	if (ptr == NULL && index > 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
/**
 * add_nodeint - adds a node to start of list
 * @head: start of list
 * @n: integer
 * Return: pointer to node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
	new->next = *head;
	}
	new->n = n;
	*head = new;
	return (new);
}
