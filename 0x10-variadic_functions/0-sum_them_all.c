#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all its parameters
 * @n: No of parameters passed 2 the function
 * @...: Variable no of paremeters 2 calculate the sum of
 * Return: If n == 0 - 0
 *         else - Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
