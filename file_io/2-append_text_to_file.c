#include "main.h"
/**
 * append_text_to_file - it appends text to the end of the line.
 * @filename: the name of the file.
 * @text_content: the text to appends on the end of the line.
 * Return: 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
		return (1);
	}
	if (text_content == NULL)
		return (1);
	close(fd);
	return (0);
}
