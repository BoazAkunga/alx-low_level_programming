#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of listint_t list
 * @head: Ptr to 1st node of listint_t list
 * @n: Data to insert in new node
 * Return: Ptr to new node else NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
