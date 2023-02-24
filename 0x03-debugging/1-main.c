#include <stdio.h>

/**
 * main - causes an infinte loop
 * return: always 0
 */

int mai(void)
{
	int i;

	printf("infinte loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("infinte loop avoided! \\o/\n");
}
