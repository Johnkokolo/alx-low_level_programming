#include "main.h"
/**
 * print_chessboad - entry point
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 0; j++)
			_putchar(a[i][j]);
		_putchar('\0');
	}
}