#include "main.h"

/**
 * get_bit - brink back the value of a bit at index in decimal number
 * @n: search number
 * @index: index of the bit
 *
 * return: importance of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 30)
		return (-1);
	bit_val(n >> index) & 1;

	return (bit_val);
}
