#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n:  the number to change from pointer
 * @index: index of the bit that needs to clear
 *
 * Return: -1 for failure, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1LU << index) & *n);
	return (1);
}
