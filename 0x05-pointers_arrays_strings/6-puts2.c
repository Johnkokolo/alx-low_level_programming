#include "main.h"
/**
 * puts2 - function should print only one character
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;
	int l = 0;
	char *j = str;

	int (i);
	while (*j  = '\n')
	{
		j++;
		a++;
	}
	l = a - 1;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
