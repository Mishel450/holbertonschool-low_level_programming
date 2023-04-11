#include "main.h"
/**
 * read_textfile - reads a text and prints it.
 * @filename: the text.
 * @letters: the number of letters of the text.
 * Return: 0 or letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int filereader;
int filewriter = malloc(sizeof(int) * letters);

	if (filename == NULL)
		return (0);
	filereader = open("filename", O_RDONLY);
	if (filereader == -1)
		return (0);
	close(filereader);
	filewriter = open("filename", O_RDWR);
	if (filewriter == -1)
	return (0);
	write(1, &filewriter, letters);
	close(filewriter);
	return (letters);
}
