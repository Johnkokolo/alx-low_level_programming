#include "main.h"

/**
 * print_array - function that print n element of an array
 * @a: array
 * @n: is the number of elements of array to be printed
 * Return: a and n input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d," a[n - 1]);
	}
	printf("\n");
}
