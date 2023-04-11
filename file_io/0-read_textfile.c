#include "main.h"
/**
 * read_textfile - reads a text and prints it.
 * @filename: the text.
 * @letters: the number of letters of the text.
 * Return: 0 or letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	if (filename != NULL)
	{
		open(&filename, O_RDWR)
		return (letters);
	}
	return (0);
}
