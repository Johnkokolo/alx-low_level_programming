#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: number of sign to be printed
 * Return: 1 if number greater than zero
 * 0 of number zero
 * -1 if number less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
