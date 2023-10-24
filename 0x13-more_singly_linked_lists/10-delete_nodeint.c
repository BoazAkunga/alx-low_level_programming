#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node in listint_t at a certain index
 * @head: Ptr to 1st element in listint_t
 * @index: Index of node 2 delete
 * Return: 1 on success else -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *current1 = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tem);
	return (1);
	}

	while (x < index - 1)
	{
	if (!tem || !(tem->next))
	return (-1);
	tem = tem->next;
	x++;
	}


	current1 = tem->next;
	tem->next = current1->next;
	free(current1);

	return (1);
}
