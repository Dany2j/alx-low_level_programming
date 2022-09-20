#include "main.h"

/**
 * swap_int - Entry point
 * @a: int a
 * @b: int b
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
