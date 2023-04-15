#include "main.h"

/**
 * _calloc-function to allocate memory for an array
 * @nmemb:number of elements
 * @size:size of the memory
 *
 * Return:returns a pointer to the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
