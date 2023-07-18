#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int j = '0';
	int k = '0';

	while (j <= '8')
	{
		while (k <= '9')
		{
			if (j < k)
			{
				putchar (j);
				putchar (k);
				if (!(j == '8' && k == '9'))
				{
					putchar (',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		j++;
	}
	putchar('\n');
	return (0);
}
