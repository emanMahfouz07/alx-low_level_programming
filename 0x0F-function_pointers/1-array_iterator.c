#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execuates a function on each element of an array
 * @array: array to be targeted
 * @size: size of array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
