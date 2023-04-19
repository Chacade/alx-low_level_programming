#include "function_pointers.h"
#include <stdio.h>
/**
 * return index place if comparison = true, else -1
 * @size: number of elements in the array
 * @array: array
 * @cmp: function does not return 0
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
