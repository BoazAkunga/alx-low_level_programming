#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Linked list to search for
 * Return: Address of node where the loop starts else or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cool = head;
	listint_t *hot = head;

	if (!head)
	return (NULL);

	while (cool && hot && hot->next)
	{
	hot = hot->next->next;
	cool = cool->next;
	if (hot == cool)
	{
	cool = head;
	while (cool != hot)
	{
	cool = cool->next;
	hot = hot->next;
	}
	return (hot);
	}
	}

	return (NULL);
}
