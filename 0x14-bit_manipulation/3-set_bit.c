#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit to 1 at given index
 * @n: decimal base 10
 * @index: index
 *
 * Return: 1 on Success or -1 on Fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	while (index--)
		bit <<= 1;

	if (bit == 0)
		return (-1);
	*n |= bit;

	return (1);
}

