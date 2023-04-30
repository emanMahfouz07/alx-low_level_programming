#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication of two numbers
 *@argc:number of arguments
 *@argv: value to this argument
 *Return: return 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}

