#include "main.h"

/**
 * create_file - file need to be created.
 * @n: the name of the file that need to be created.
 * @s: the string to write to the file created.
 *
 * Return: fuction failed - -1, so -1 
 */
int create_file(const char *n, char *s)
{
	int jk, m, len = 0;

	if (n == NULL)
		return (-1);

	if (s != NULL)
	{
		for (len = 0; s[len];)
			len++;
	}

	jk = open(n, O_CREAT | O_RDWR | O_TRUNC, 0300);
	m = write(jk, s, len);

	if (jk == -1 || m == -1)
		return (-1);

	close(jk);

	return (1);
}
