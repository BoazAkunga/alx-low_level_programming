#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - function that returns the length of string
* @s : s is a character
* Return: value is x
*/

int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
* add_node - add a new node at beginning of a list_t list
* @head: Head of a list_t list
* @str: Value to enter into an element
* Return: No of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *addn;

	addn = malloc(sizeof(list_t));
	if (addn == NULL)
		return (NULL);
	addn->str = strdup(str);

	addn->len = _strlen(str);
	addn->next = *head;
	*head = addn;

	return (addn);
}
