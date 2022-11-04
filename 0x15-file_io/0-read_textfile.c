#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file to read from
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, count = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buf, letters);
	close(fd);
	if (nread == -1)
	{
		free(buf);
		return (0);
	}

	count = write(STDOUT_FILENO, buf, nread);
	free(buf);
	if (nread != count)
		return (0);

	return (count);
}
