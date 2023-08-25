#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Appends a new node at the end of a list_t list
 * @head: Pointer to the pointer of the list_t list
 * @str: String to be stored in the new node
 * Return: Address of the new node on success else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
