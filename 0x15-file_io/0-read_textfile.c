#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads text file print to stdoutput
 * @filename: Reading a text file.
 * @letters: The number of letters that must be read.
 * Return: w- when the function fails or the file name is NULL,
 *         the actual number of bytes read and written is 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

