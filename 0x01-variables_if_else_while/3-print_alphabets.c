#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabet
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
