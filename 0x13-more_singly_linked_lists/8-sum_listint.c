#include "lists.h"

/**
 * sum_listint - Calculates sum of all data in listint_t
 * @head: 1st node in listint_t
 * Return: Resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tem = head;

	while (tem)
	{
	sum += tem->n;
	tem = tem->next;
	}

	return (sum);
}
