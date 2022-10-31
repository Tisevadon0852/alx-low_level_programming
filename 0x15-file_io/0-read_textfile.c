#include "main.h"

/**
 * read_textfile -function that reads and prints a text file
 * @filename: file name
 * @letters: numbers of letters it will print
 *
 * Return: numbers of letters printed, else returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nopen, nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nopen = open(filename, O_RDONLY);
	nread = read(nopen, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	if (nopen == -1 || nread == -1 || nwrite == -1 || nwrite != nread)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(nopen);

	return (nwrite);
}
