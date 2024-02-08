#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary number to unsighed int
 * @b: string literal of binary number
 *
 * Return: converted number or 0 if b is (NULL or diff from 0 & 1)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int decimal = 0, pow = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	while (i--)
	{
		if (b[i] == '1')
			decimal |= pow;
		pow *= 2;
	}

	return (decimal);
}
