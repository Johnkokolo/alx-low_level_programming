#include <stdio.h>

/**
 * main - causes an infinte loop
 * Return: always 0
 */

int main(void)
{
	int i;

	printf("infinte loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	printf("infinte loop avoided! \\o/\n");

	return (0);
}
