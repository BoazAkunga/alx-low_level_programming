#include "lists.h"

/**
 * reverse_listint - Reverses listint_t list
 * @head: Ptr to 1st node in listint_t
 * Return: Ptr to 1st node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = pre;
	pre = *head;
	*head = next;
	}

	*head = pre;

	return (*head);
}
