#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - Releases memory allocated for list_t list
* @head: Ptr to 1st node of the list_t list to free
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}
}
