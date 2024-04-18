#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear Search Algorithm
 * @array: Ptr to the first element of the array to search
 * @size: No of the elements in array
 * @value: the value to look for
 *
 * Return: if the value is not present is not foundor the array is NULL, -1.
 * else, the first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
