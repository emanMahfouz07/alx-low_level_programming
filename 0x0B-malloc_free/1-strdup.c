#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which containe a copy
 * of the string given as a parameter
 * @str:string to be copied
 * Return:null in case of error
 * pointer to allocated space
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;

	cpy = malloc(sizeof(char) * (len));

	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';
	return (cpy);
}
