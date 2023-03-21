#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: start of list
 * @index: index of node
 * Return: 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *ptr1, *ptr2;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		i = pop_listint(head);
	if (i == -1)
		return (-1);
	else
		return (1);
	}

	for (ptr1 = *head; index - 1 > 0 && ptr1 != NULL; ptr1 = ptr->next, index--)
{
}

	if (ptr1 == NULL)
		return (-1);
	else
	{
	ptr2 = ptr1->next;
	ptr1->next = ptr2->next;
	free(ptr2);
		return (1);
	}
	}
/**
 * pop_listint(listint_t **head)
 * @head: start of list
 * Return: popped value
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *hedd = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	n = hedd->next;
	hedd = hedd->next;
	free(*head);
	*head = hedd;
	return (n);
}
