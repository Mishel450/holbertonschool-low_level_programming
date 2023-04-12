#include "main.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND | O_CREAT, 0500);
	if (fd == -1)
		return (-1);
	if (text_content != '\0')
	{
		read(text_content, fd, strlen(text_content));
		return (1);
	}
	if (text_content == '\0')
		return (1);
	close(fd);
	return (0);
}
