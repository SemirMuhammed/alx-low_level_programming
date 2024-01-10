#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: input value to check.
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int x, y;
	int i, divisor;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	x = n;
	y = x;
	divisor = 1;
	if (x > 9)
	{
		while (x > 9)
		{
			divisor = divisor * 10;
			x = x / 10;
		}
		for (i = divisor; i >= 1; i = i / 10)
			_putchar((y / i) % 10 + '0');
	}
	else
		_putchar(x + '0');
}
