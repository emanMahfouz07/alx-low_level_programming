#include <stdio.h>

/*
 * main - print number of arguments
 * argc - number of agruments
 * argv - value to this arguments
 * Return: number of args
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
