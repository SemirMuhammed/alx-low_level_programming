#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition of all given parameters
 * @n: number of parameters
 *
 * Return: Sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	if (n <= 0)
		return (0);

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}

