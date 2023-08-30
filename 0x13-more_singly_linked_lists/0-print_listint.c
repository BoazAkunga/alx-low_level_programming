#include "lists.h"
/**
 * print_listint - prints all the values in a listint_t list
 * @h: linked list of type listint_t to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}
	return (num);
}
