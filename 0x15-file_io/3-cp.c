#include "main.h"

/**
 * error - function that prints error
 * @file_from: file from
 * @file_to: file to
 * @argv: argument vector
 * return: nothing
 */
void error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry function to check code
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nread, count;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_from, file_to, argv);

	nread = 1024;
	while (nread == 1024)
	{
		nread = read(file_from, buf, 1024);
		if (nread == -1)
			error(-1, 0, argv);

		count = write(file_to, buf, nread);
		if (count == -1)
			error(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
