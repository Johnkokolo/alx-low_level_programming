#include "main.h"

/**
 * create_file - the file that needs to be created.
 * @n: the name of the file that need to be created.
 * @s: the string to write to the file created.
 *
 * Return: when the function fail - -1. otherwise -1.
 */
int create_file(const char *n, char *s)
{
	int j, m, l = 0;

	if (n == NULL)
		return (-1);

	if (s != NULL)
	{
		for (l = 0; s[l];)
			l++;
	}

	j = open(n, O_CREAT | O_RDWR | O_TRUNC, 0300);
	m = write(j, s, l);

	if (j == -1 || m == -1)
		return (-1);

	close(j);

	return (1);
}
