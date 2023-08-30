#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) in a listint_t list
 * @head: pointer to the head of the listint_t list
 * Return: sum of all data (n) else 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
