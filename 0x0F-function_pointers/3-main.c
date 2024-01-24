#include "3-calc.h"

/**
 * main - perfom simple operation
 * @argc: number of command line argument
 * @argv: array of command line arguments
 *
 * Return: 0   - On Success
 * 98  - if the number of argument is wrong (not 4)
 * 99  - if the operator is not (+, -, *, /, or %)
 * 100 - if the user tries to divide (/ or %) by 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*op_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op_ptr = get_op_func(operator);

	if (!op_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_ptr(num1, num2));

	return (0);
}
