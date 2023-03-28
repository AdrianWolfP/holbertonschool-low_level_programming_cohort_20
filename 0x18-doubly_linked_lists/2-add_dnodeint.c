#include "lists.h"
/**
 * add_dnodeint - add new node to beginning of list
 * @head: add on to list pointer
 * @n: data value of new node
 * Return: Address of the new element, NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	if (*head)
		(*head)->prev = newNode;

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	*head = newNode;
	return (*head);
}
