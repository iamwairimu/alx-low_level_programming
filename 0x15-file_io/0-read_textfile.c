#include "main.h"
/**
 * read_textfile - reads text file and print to stdout
 * @filename: file to read
 * @letters: number to read and print
 * Return: number of letters read and printed,
 * 0 if file cannot open,
 * 0 if filename is NULL,
 * 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
