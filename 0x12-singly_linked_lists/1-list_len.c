#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - Checks code for ALX School students.
* @h: Name of the list
* Return: No of nodes in h
*/

size_t list_len(const list_t *h)
{
	int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
