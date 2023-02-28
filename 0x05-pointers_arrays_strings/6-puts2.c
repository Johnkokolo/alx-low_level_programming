#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: The string to be treated
* Return: void
*/

void puts2(char *str)
{
	int m;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (m = 0; m < l; m += 2)
	{
		putchar(str[l]);
	}
	putchar('\n');
}
