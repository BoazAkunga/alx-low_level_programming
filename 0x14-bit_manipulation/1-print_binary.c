#include "main.h"

/**
 * _pow - Function calculates (base ^ power)
 * @base: Base of exponent
 * @power: Power of exponent
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int x;

	numb = 1;
	for (x = 1; x <= power; x++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - Prints No in binary notation
 * @n: No to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, look;
	char y;

	y = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		look = n & div;
		if (look == div)
		{
			y = 1;
			_putchar('1');
		}
		else if (y == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
