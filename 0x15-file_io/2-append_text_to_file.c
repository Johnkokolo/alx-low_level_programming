#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to be added on the file.
 *
 * Return: -1; NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int l, m, t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (t = 0; text_content[t];)
			t++;
	}

	l = open(filename, O_WRONLY | O_APPEND);
	m = write(l, text_content, t);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
