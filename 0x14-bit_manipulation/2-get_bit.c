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
	int bit = 0;

	if (index == 0)
	{
		bit |= n;
		return (bit & 1);
	}
	while (n)
	{
		n = n >> 1;
		index--;
		if (index == 0)
			break;
	}

	if (index)
		return (-1);

	bit |= n;
	return (bit & 1);
}

