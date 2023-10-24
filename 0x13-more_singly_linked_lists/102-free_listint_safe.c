#include "lists.h"

/**
 * free_listint_safe - Frees linked list
 * @h: Ptr to 1st node in THE LINKED list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int ba;
	listint_t *tem;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	ba = *h - (*h)->next;
	if (ba > 0)
	{
	tem = (*h)->next;
	free(*h);
	*h = tem;
	len++;
	}
	else
	{
	free(*h);
	*h = NULL;
	len++;
	break;
	}
	}

	*h = NULL;

	return (len);
}
