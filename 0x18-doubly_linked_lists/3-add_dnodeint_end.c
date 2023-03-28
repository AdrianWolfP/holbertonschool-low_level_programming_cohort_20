#include "lists.h"
/**
 * add_dnodeint_end - new node is added to end of list
 * @head: pointer
 * @n: date of new node
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	newNode->n =  n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL);
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
