#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	int n = (97);

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
