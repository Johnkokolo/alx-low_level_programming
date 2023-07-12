#include "main.h"

/**
 * append_text_to_file - creat a file.
 * @filename: the name of the file to be created.
 * @text_content: Text that need to be append to the file.
 *
 * Return: 1 on success, failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, j, file = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	j = write(z, text_content, file);

	if (z == -1 || j == -1)
		return (-1);

	close(z);

	return (1);
}
