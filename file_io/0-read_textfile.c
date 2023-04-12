#include "main.h"
/**
 * read_textfile - reads a text and prints it.
 * @filename: the text.
 * @letters: the number of letters of the text.
 * Return: 0 or letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, m;
	char *filewriter = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);
	if (filename != NULL)
	{
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n = read(fd, filewriter, letters);
	m = write(1, filewriter, n);
	close(fd);
	return (m);
	}
	return (0);
}
