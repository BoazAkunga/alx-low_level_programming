#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list
 * @head: Ptr to 1st element in listint_t list
 * Return: Data inside the elements that was deleted on success
 * else 0 if listint_t is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (numb);
}
