#include "main.h"
/**
 * _memset the memset function fills the first n
 * bytes of the memory area pointed to s
 * @s target 
 * @n number of bytes 
 * @b constant byte
 * Return : returns new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
