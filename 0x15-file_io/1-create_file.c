#include "main.h"

/**
 * create_file - A file created
 * @filename: Pointer to the name of the file to make
 * @text_content: String pointer to write to the file
 *
 * Return: - -1 if the function fails,
 *          -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int jp, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	jp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(jp, text_content, len);

	if (jp == -1 || w == -1)
		return (-1);

	close(jp);

	return (1);
}

