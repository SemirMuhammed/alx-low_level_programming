#include "function_pointers.h"

/**
 * array_iterator - executes a function on array
 * @array: array elements
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ( array && action && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
