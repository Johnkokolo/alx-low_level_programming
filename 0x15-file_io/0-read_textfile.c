#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that Read a text file print to STDOUT.
 * @filename:  file being read
 * @letters: the letters that needs to be read
 * Return: l- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t jl;
	ssize_t l;
	ssize_t z;

	jl = open(filename, O_RDONLY);
	if (jl == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	z = read(jl, bu, letters);
	l = write(STDOUT_FILENO, bu, z);

	free(bu);
	close(jl);
	return (l);
}
