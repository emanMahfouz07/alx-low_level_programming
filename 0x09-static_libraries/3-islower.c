#include "main.h"
/**
 * _islower-controls if the character is lowercase
 * @c:character to be verfied
 * Return:return 0 or 1;
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
