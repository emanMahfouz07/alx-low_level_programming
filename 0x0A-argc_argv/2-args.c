#include <stdio.h>

/*
 * main - prints all arguments it recives
 * @argc: argument count
 * @argv: argument values
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);

}
