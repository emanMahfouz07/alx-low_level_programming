#include "main.h"
/**
 * _memcpy - the _mempcy() function copies n bytes
 * from memory source to memory area destination
 * @dest:area where bytes are copied to
 * @src:area where bytes are copied from
 * @n:number of byts to copy
 * Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
