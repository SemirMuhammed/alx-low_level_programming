#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, num = 0;
	char *str;
	va_list args;

	while (format[num] != '\0')
		num++;

	va_start(args, format);
	while (i < num)
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(args, int));
				break;
			case ('i'):
				printf("%d", va_arg(args, int));
				break;
			case ('f'):
				printf("%f", va_arg(args, double));
				break;
			case ('s'):
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (i < num - 1 && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);

	printf("\n");
}
