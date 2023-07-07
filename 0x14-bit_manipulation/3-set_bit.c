#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the number to changed from the pointer
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1LU << index) | *n);
	return (1);
}
