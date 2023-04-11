#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- the file that print to STDOUT.
 * @filename: reading file
 * @letters: letter to be read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t z;
	ssize_t j;
	ssize_t m;

	z = open(filename, O_RDONLY);
	if (z == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	m = read(z, c, letters);
	j = write(STDOUT_FILENO, c, m);

	free(c);
	close(z);
	return (m);
}
