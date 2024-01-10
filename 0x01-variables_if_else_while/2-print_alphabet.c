#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
