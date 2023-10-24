#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node in listint_t
 * at a certain position
 * @head: Ptr to 1st node in listint_t
 * @idx: Index where new node is added
 * @n: Data to enter in new node
 * Return: Ptr to new node on success else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (x = 0; tem && x < idx; x++)
	{
	if (x == idx - 1)
	{
	new->next = tem->next;
	tem->next = new;
	return (new);
	}
	else
	tem = tem->next;
	}

	return (NULL);
}
