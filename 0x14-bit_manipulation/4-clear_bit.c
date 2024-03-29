#include "main.h"

/**
 * clear_bit - set bit at index to 0
 * @n: decimal base 10
 * @index: index
 *
 * Return: 1 on Success or -1 on Fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	while (index--)
		bit <<= 1;

	if (bit == 0)
		return (-1);

	if (*n & bit)
		*n -= bit;

	return (1);
}
