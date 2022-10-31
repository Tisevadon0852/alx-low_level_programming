#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: content to be written
 *
 * Return: 1 if the file exists, else -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		nwrite = write(fd, text_content, len);

		if (nwrite == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
