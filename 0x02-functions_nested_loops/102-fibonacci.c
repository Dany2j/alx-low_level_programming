#include <stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int d1, d2, fn;

	d1 = 1;
	d2 = 2;
	printf("%ld, %ld", d1, d2);
	for (c = 0; c < 48; c++)
	{
		fn = d1 + d2;
		printf(", %ld", fn);
		d1 = d2;
		d2 = fn;
	}
	printf("\n");
	return (0);
