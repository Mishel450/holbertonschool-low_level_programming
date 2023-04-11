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
	char *filewriter;


	filewriter = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	filechecker = open("filename", O_RDWR);
	if (filechecker == -1)
		return (0);
	strcpy(filewriter, filename);
	write(1, &filewriter, letters);
	close(filechecker);
	return (letters);
}
