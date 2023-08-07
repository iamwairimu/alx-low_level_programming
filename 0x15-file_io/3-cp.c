#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int fd_from, fd_to, nread;
	char buffer[1024];
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "usage: cp file _from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write(fd_to, buffer, nread);
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
