#include "main.h"
/**
 * _isdigit - is function that verfirs if a character is digit or not
 * @c:tested character
 * Return:return 1 if character is digit if not return 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
