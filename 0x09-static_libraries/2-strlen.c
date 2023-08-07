#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: 0
 */
int _strlen(char *s)
{
	int total_length;

	total_length = 0;

	while (s[total_length] != '\0')
	{
		total_length++;
	}
	return (total_length);
}
