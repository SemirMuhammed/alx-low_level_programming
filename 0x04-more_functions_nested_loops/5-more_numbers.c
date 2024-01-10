#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void more_numbers(void)
{
	int number, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
