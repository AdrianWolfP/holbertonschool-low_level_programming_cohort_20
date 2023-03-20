#include "lists.h"
/**
 * add_node_end - add new node to end of list
 * @head: pointer to front of list
 * @str: string added to node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = newNode;
	}

	return (newNode);
}
