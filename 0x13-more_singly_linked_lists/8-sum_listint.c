#include "lists.h"
/**
 * sum_listint - sum of all integer in list
 * @head: start of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)

	{
		sum += head->n;
	}
	return (sum);
}
