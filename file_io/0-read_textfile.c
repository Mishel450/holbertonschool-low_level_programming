#include "main.h"
/**
 * read_textfile - reads a text and prints it.
 * @filename: the text.
 * @letters: the number of letters of the text.
 * Return: 0 or letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filechecker;
	size_t i;


	if (filename == NULL)
		return (0);
	filechecker = open(filename, O_RDONLY);
	if (filechecker == -1)
		return (0);
	for (i = 0; i < letters; i++)
	{
		write(1, &filename[i], 1);
	}
	close(filechecker);
	return (letters);
}
