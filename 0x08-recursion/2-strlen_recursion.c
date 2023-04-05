#include "main.h"
/**
 *_strlen_recursion - returns the length of string
 *@s:string to know it's size
 *Return: legnth of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
