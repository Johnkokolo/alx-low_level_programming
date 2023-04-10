#include "main.h"

/**
 * get_endianness - big or small machine in india
 * Return: 0, 1
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
