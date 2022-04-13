#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The array.
 * @size: Number of elements in the array.
 * @cmp: Callback function to execute.
 * Return: -1 if no element matches or size is <= 0
 *         Otherwise - The index of the first element for which the
 *         cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

