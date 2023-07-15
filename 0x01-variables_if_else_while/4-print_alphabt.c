#include <stdio.h>

/**
 * main - Entry point
 * Description - printing alphabet in uppercase and lowercase
 * Return: Always 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
