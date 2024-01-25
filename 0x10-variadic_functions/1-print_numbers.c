#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arg;

	if (n <= 0)
		return;

	if (separator == NULL)
		separator = "";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(arg);

	printf("\n");
}