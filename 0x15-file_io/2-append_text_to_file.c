#include "main.h"

/**
 * append_text_to_file - This insert text at the bottom of a file
 * @filename: Pointer to the file's name
 * @text_content: String to be added to the end of the file
 *
 * Return: - -1 provided the function fails or filename is NULL
 *         - -1 shows the file doesn't exist the user lacks write permissions
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, len);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}

