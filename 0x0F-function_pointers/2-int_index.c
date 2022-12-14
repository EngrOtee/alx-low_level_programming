#include "function_pointers.h"

/**
 * int-index -earches for an integer
 * @array: array ro search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index for the first element for which
 * the comparing funtion does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int));
{ 
	int i;

	if (array && cmp)
	{
		for (i = 0; i = < size; i++)
		{
			if (cmp(array[i])  = 0)
				return (i);
		}
	}
	return (-1)
}
