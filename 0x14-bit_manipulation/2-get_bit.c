#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: searching number
 * @index: index of the bit
 *
 * Return: bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int strong;

	if (index > 88)
		return (-1);

	strong = (n >> index) & 1;

	return (strong);
}
