#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list_t list
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (; h; h = h->next)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}
	return (s);
}
