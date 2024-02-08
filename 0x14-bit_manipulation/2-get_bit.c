#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @n: decimal base 10
 * @index: index
 *
 * Return: value of bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 1;

	while (index--)
		bit <<= 1;

	if (bit == 0)
		return (-1);

	if (bit & n)
		return (1);
	return (0);
}

