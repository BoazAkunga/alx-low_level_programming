#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0 (Big endian) else 1 (little endian)
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
