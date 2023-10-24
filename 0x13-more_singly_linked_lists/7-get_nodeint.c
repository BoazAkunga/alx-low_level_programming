#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at a certain index in listint_t
 * @head: 1st node in listint_t
 * @index: Index of node to return
 * Return: Ptr to node we're searching for else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tem = head;

	while (tem && x < index)
	{
	tem = tem->next;
	x++;
	}

	return (tem ? tem : NULL);
}
