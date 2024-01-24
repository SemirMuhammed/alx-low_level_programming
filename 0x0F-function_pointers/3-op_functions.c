#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - Addition
 * @a: integer
 * @b: integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - Substruction
 * @a: integer
 * @b: integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - Multiplication
 * @a: integer
 * @b: integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - Division
 * @a: integer
 * @b: integer
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - Module
 * @a: integer
 * @b: integer
 *
 * Return: remainder of the division a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
