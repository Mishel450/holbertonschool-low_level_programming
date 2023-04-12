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
	fd = open(filename, O_RDWR | O_CREAT, 500);
	dprintf(fd, text_content);
	return (1);

}
