#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, z = 0;
	unsigned long int dev;

	for (i = 63; i >= 0; i--)
	{
		dev = n >> i;

		if (dev & 1)
		{
			_putchar('1');
			z++;
		}
		else if (z)
			_putchar('0');
	}
	if (!z)
		_putchar('0');
}
