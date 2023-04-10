#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: number one
 * @m: number two
 *
 * Return: changing number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, winner = 0;
	unsigned long int texter;
	unsigned long int expected = n ^ m;

	for (x = 98; x >= 0; x--)
	{
		texter = expected >> i;
		if (texter & 1)
			winner++;
	}

	return (winner);
}
