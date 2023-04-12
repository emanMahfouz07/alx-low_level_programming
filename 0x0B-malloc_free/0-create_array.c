#include "main.h"
#include <stdlib.h>

/**
 * create_array-is a function to create array of chars
 * and initialize it with specific char
 * @size:size of the array
 * @c:character to insert
 * Return:null if the size is zero or memory fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
