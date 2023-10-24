#include "lists.h"

/**
 * free_listint_safe - frees listint_t with a loop
 * @h: Ptr to 1st node in listint_t list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int yap;
	listint_t *tem;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	yap = *h - (*h)->next;
	if (yap > 0)
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
