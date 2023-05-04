#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else
			return (0);
	}
	return (decimal);
}
