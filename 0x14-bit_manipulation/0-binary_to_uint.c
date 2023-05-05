#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int str_len = 0, base = 1;

	while (b[str_len] != '\0')
		str_len++;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	while (str_len)
	{
		output += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (output);
}
