#include "main.h"

/**
 * flip_bits - returns number of bit flips to get from n to m
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bit flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;

	while (n)
	{
		if (((n & 1) && !(m & 1)) || (!(n & 1) && (m & 1)))
			c++;
		n >>= 1;
		m >>= 1;
	}

	return (c);
}
