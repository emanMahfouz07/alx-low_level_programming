#include "main.h"
#include <stdlib.h>

/**
 * create_array-is a function to create array of chars
 * and initialize it with specific char
 * @size:size of the array
 * @c:character to insert
 * Return:null if the size is zero or memory fail
 */
char *create_array(unsigned int size ,char c)
{
	if (size == 0)
		return (NULL);

	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;
	
	return (arr);
}
