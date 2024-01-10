#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: the buffer
 * @size: size of buffer to print
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int s = 0, i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (s < size)
	{
		j = size - s < 10 ? size - s : 10;
		printf("%08x: ", s);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + s + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + s + i);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		s += 10;
	}
}
