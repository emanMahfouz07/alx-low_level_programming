#include "main.h"

/**
 * get_bit - get hte new value of bit at given index
 * @num: the number 
 * @index: index of the bit
 *
 * Return: the converted value
 */

int get_bit(unsigned long int num, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
