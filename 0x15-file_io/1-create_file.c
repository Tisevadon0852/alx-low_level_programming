#include "main.h"

/**
 * create_file - function creates a file
 * @filename: file name
 * @text_content: content to be written in the file
 *
 * Return: if successful return 1, else return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	nwrite = write(fd, text_content, len);

	if (nwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
