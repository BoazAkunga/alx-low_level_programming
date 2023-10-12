#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each array elem on a NL
 * @array: array
 * @size: how many elem 2 print
 * @action: pointer 2 print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
