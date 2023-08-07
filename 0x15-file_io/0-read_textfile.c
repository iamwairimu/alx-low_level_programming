#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file and print to posix stdout
 * @filename: the file
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed,
 * 0 if file cannot open or be read,
 * 0 if filename is NULL,
 * 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t i;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(fd, buf, letters);
	bytes_read = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(fd);
	return (bytes_read);
}
