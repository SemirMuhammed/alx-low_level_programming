#include "main.h"

void num_to_binary(unsigned long int n);

/**
 * print_binary - prints the binary reperentaion of a number
 * @n: decimal base 10 number
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	num_to_binary(n);
}

/**
 * num_to_binary - prints number in binary form
 * @n: decimal number base 10
 *
 * Return: Void
 */
void num_to_binary(unsigned long int n)
{
	if (n)
	{
		num_to_binary(n >> 1);
		if (n & 1)
			_putchar('1');
		else
		 	_putchar('0');
	}
}
