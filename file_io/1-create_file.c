#include "main.h"
/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (*text_content != NULL)
	{
		n = read(fd, text_content, strlen(text_content));
		read(n, fd, strlen(text_content));
		return (1);
	}
	if (text_content == NULL)
		return (1);
	close(fd);
	return (0);
}
