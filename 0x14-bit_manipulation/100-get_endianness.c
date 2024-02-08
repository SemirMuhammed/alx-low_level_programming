#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test = 0x1;
	char *address = (char *) &test;

	if (*address == 1)
		return (1);
	return (0);
}

