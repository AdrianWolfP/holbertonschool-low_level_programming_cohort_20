#include "lists.h"
/**
 * pop_listint - deletes head node in the linked list
 * @head: list
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (!(*head))
		return (0);

	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
