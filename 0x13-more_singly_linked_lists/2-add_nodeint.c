#include "lists.h"
/**
 * add_nodeint - adds new node at beginning
 * @head: pointer
 * @n: new node
 * Return: address of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = temp;
	*head = newNode;

	return (newNode);
}
