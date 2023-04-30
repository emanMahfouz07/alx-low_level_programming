#include <stdio.h>
/*
 * main - prints program name
 * argc: number of argumernts
 * argv:array of values of the arguments
 * Return:0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
