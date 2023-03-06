#include "main.h"
#include <unistd.h>

/**
 * _putchar - write charecter to stdout
 * @c: the charecter to print 
 *
 * Return: on success 1.
 * on error, -1 is return 
 */
int _putchar(char.c)
{
	return (write(1, &c, 1));
}
