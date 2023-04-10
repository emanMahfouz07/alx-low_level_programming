#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	puts("\"Programming is like buillding a multilingual puzzle");
	return (0);
}
