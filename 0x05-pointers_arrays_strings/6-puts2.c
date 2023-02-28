#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the fist one
 * @str: input
 * Rturn: 0
 */
void puts2(char *str)
{
	int z = 0;
	int a = 0;
	char *p = str;
	int o;

	while (*p != '\0')
	{
		p++;
		z++;
	}

	a = z - 1;
	for (o = 0; o <= a; o++)
	{
		putchar(str[0]);
	}
	putchar('\n');
}
