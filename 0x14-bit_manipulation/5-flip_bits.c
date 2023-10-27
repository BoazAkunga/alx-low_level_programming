#include "main.h"

/**
 * flip_bits - counts No of bits to change
 * to get 4rm 1 no to another
 * @n: 1st number
 * @m: 2nd number
 * Return: No of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cbit = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = exclusive >> x;
		if (now & 1)
			cbit++;
	}

	return (cbit);
}
