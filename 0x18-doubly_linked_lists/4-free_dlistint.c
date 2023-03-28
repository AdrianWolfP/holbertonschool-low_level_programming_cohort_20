#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer
 */
void free_dlistint(dlistint_t list)
{
	dlistint_t *temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}

	free(temp);
}
