#include "main.h"

/**
 * binary_to_unit - a binary number converted to unsigned int
 * @b: string that contains binary number
 *
 * Return: 0
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; j++)
	{
		if (b[i] < '0' || > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
