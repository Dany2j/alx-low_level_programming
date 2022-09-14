#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int e, l;

	for (e = 0; e <= 9; e++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	}
}
