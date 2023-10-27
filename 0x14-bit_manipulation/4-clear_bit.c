#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Prog sets the value of bit to 0 at given index
 * @n: Parameter
 * @index: Index
 * Return: 1 (success) else -1 (error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
