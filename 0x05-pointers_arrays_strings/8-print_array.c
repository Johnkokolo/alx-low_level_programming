#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of array
 * @a: array to print from
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int indexc;

	for (int index = 0; indexc <= n - 1; indexc++)
	{
		if (indexc != n - 1)
			printf("%d, ", a[indexc]);
		else
			printf("%d", a[indexc]);
	}
	putchar('\n');
}
