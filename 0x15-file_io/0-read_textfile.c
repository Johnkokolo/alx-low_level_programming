#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- text file print to STDOUT.
 * @filename: file being read
 * @letters:letters to be read
 * Return: NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t pd;
	ssize_t j;
	ssize_t m;

	pd = open(filename, O_RDONLY);
	if (pd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	m = read(pd, c, letters);
	j = write(STDOUT_FILENO, c, m);

	free(c);
	close(pd);
	return (j);
}
