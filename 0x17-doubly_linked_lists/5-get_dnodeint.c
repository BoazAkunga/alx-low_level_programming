#include "lists.h"

/*
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: index of nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b;

	if (head == NULl)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	b = 0;

	while (Head != NULL)
	{
		if (b == index)
			 break;
		head = head->next
			b++;
	}

	return (head);
}
