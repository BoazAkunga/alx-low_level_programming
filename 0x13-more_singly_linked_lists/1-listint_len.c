#include "lists.h"

/**
 * listint_len - Returns No of elements in listint_t list
 * @h: LINKED LIST called listint_t to traverse
 * Return: Count of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}

	return (count);
}
