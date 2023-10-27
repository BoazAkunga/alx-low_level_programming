#include"main.h"

/**
 * get_bit - Prog returns value of bit at a given index.
 * @n: No to check bits in
 * @index: Index at which to check bit
 * Return: Value of bit (success) else -1 (error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, look;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	look = n & div;
	if (look == div)
		return (1);
	return (0);
}
