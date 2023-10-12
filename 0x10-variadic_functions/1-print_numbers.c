#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints Nos, followed by a new line.
 * @separator: The string 2 be printed between Nos.
 * @n: No of integers passed 2 the function.
 * @...: Variable number of numbers 2 be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Nums;
	unsigned int index;

	va_start(Nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(Nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(Nums);
}
