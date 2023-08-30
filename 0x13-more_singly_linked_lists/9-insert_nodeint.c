#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in listint_t list
 * at a given position
 * @head: pointer to a pointer to the head of the listint_t list
 * @idx: index where new node should be added starting from 0
 * @n: integer value to add to new node
 * Return: address of the new node on success else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;
	listint_t *cp;
	listint_t *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cp = *head;

	while (cp != NULL && c < idx - 1)
	{
		cp = cp->next;
		c++;
	}

	if (cp == NULL || c < idx - 1)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = cp->next;
	cp->next = new_node;

	return (new_node);
}
