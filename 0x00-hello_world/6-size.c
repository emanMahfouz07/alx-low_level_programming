#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long c;
	char d;
	float f;

	printf("Size of a char:%lu\n",sizeof(d));
	printf("Size of an int:%lu\n",sizeof(a));
	printf("Size of a long int:%lu\n",sizeof(b));
	printf("Size of a long long:%lu\n",sizeof(c));
	printf("size of a float:%li\n",sizeof(f));
