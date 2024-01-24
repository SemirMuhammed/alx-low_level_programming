#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be search(ed)
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of the first element found under @cmp conditon
 * 	   If no element matches or (size <= 0), returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
