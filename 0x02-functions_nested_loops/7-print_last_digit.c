#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the number
 * Return: value of last dgit
 */
int print_last_digit(int n)
{
	int ld = n % 9;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (0);
}
