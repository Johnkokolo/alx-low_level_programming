#include "main.h"

/**
 * append_text_to_file - add a text at the end of a file.
 * @filename: name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, m, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	m = write(z, text_content, l);

	if (z == -1 || m == -1)
		return (-1);

	close(z);

	return (1);
}
