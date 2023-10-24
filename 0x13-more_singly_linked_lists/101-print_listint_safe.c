#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts No of nodes in
 * looped listint_t list
 * @head: Ptr to head of listint_t to check.
 * Return: No of nodes in listint_t else 0 (not looped)
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *boaz, *akunga;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	boaz = head->next;
	akunga = (head->next)->next;

	while (akunga)
	{
	if (boaz == akunga)
	{
	boaz = head;
	while (boaz != akunga)
	{
	nodes++;
	boaz = akunga->next;
	akunga = akunga->next;
	}

	boaz = boaz->next;
	while (boaz != akunga)
	{
	nodes++;
	boaz = boaz->next;
	}

	return (nodes);
	}

	boaz = boaz->next;
	akunga = (akunga->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list
 * @head: Ptr to head of listint_t list
 * Return: No of nodes listint_t list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
