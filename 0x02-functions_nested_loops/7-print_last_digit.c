#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: an integer input
 * Description - print with _putchar declared
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int i;

	i = r % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
