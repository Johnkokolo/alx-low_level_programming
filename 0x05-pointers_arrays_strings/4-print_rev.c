#include "main.h"
/**
 * print_rev - imprime a reversal
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int n = 0;
	int o;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (o = n; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
