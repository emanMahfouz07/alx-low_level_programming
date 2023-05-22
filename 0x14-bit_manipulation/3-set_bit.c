#include "main.h"

/**
 * set_bit - sets a bit to thee position 1
 * @num:number
 * @index:index to be set
 *
 * Return:1 on sucess
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*num |= (1 << index);
	return (1);
}
