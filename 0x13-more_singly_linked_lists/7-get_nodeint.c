#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to the head of listint_t list
 * @index: index of the node to retrieve starting at 0
 * Return: NULL if node does not exist else pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (c == index)
			return (curr);

		curr = curr->next;
		c++;
	}
	return (NULL);
}

