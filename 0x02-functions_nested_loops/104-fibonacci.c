#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int d1, d2, fn, an2, d11, d22;

	d1 = 1;
	d2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", d1, d2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fn = d1 + d2;
			printf(", %ld", fn);
			d1 = d2;
			d2 = fn;
		}
		else
		{
			if (boolean2)
			{
				d11 = d1 % 1000000000;
				d22 = d2 % 1000000000;
				d1 = d1 / 1000000000;
				d2 = d2 / 1000000000;
				boolean2 = 0;
			}
			an2 = (d11 + d22);
			fn = d1 + d2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", an2 % 1000000000);
			d1 = d2;
			d11 = d22;
			d2 = fn;
			d22 = (an2 % 1000000000);
		}
		if (((d1 + d2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}

