#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int d1, d2, fn, bfn;

	d1 = 1;
	d2 = 2;
	fn = bfn = 0;
	while (fn <= 4000000)
	{
		fn = d1 + d2;
		d1 = d2;
		d2 = fn;
		if ((d1 % 2) == 0)
		{
			bfn += d1;
		}
	}
	printf("%ld\n", bfn);
	return (0);
}
