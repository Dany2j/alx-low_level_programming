#include <stdio.h>
/**
 * main - Point of Sizes
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: 1 byte(s)\n", sizeof(a));
	printf("Size of a an int: 4 byte(s)\n", sizeof(b));
	printf("Size of a long int: 8 byte(s)\n", sizeof(c));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(d));
	printf("Size of a float: 4 byte(s)\n", sizeof(e));
	return (0);
}
