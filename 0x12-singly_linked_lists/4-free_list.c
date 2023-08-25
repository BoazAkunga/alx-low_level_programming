#include <stdlib.h>
#include "lists.h"
/**
 * free_list - releases the memory occupied by a linked list
 * @head: pointer to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
