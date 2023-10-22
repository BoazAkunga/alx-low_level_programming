#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Finds length of string
* @str: String to find length of
* Return: Length of string
*/

unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
	;
	return (x);
}

/**
* add_node_end - adds New node to end of list_t list
* @head: double ptr to list_t list
* @str: string to add to New node
* Return: ptr to New node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New, *tmp;

	if (str == NULL)
		return (NULL);
	New = malloc(sizeof(list_t));
	if (New == NULL)
		return (NULL);
	New->str = strdup(str);
	if (New->str == NULL)
	{
		free(New);
		return (NULL);
	}
	New->len = _strlen(New->str);
	New->next = NULL;
	if (*head == NULL)
	{
		*head = New;
		return (New);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = New;
	return (New);
}
