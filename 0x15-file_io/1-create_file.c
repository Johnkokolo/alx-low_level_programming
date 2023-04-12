#include "main.h"

/**
 * create_file - creats a file.
 * @n: the name of the file that need to be created.
 * @s: the string to write to the file created.
 *
 * Return: if the function fail - -1. otherwise -1.
 */
int create_file(const char *n, char *s)
{
	int jk, m, l = 0;

	if (n == NULL)
		return (-1);

	if (s != NULL)
	{
		for (l = 0; s[l];)
			l++;
	}

	jk = open(n, O_CREAT | O_RDWR | O_TRUNC, 0300);
	m = write(jk, s, l);

	if (jk == -1 || m == -1)
		return (-1);

	close(jk);

	return (1);
}
