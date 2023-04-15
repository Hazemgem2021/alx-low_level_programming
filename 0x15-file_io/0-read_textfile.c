#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t h, m, f;
	char *bufer;

	if (filename == NULL)
		return (0);

	bufer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	h = open(filename, O_RDONLY);
	m = read(h, bufer, letters);
	f = write(STDOUT_FILENO, buffer, m);

	if (h == -1 || m == -1 || f == -1 || f != m)
	{
		free(bufer);
		return (0);
	}

	free(buffer);
	close(h);

	return (f);
}
