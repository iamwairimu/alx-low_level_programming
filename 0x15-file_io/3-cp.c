#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - allocate 1024 bytes to a buffer
 * @file: name of file
 * Return: pointer to newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file descriptors
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: array
 * Return : 0 (success)
 *
 * Description: if argument count is incorrect - exit code 97,
 * if file_from doesn't exist or can;t be read - exit code 98,
 * if file_to can't be created or written - exit code 99,
 * if file_to or file_from can't close - exit code 100,
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		return (97);
	}
	buffer = create_buffer(argv[1]);
	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't read from file %s\n", argv[1]);
		free(buffer);
		return (98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from);
		return (99);
	}
	do {
		r = read(from, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't read from file %s\n", argv[1]);
			free(buffer);
			close_file(from);
			close_file(to);
			return (98);
		}
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: can't write to %s\n", argv[2]);
			free(buffer);
			close_file(from);
			close_file(to);
			return (99);
		}
	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
