#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string,
 * to add at the end of the file
 * Return: 1 (success) or -1 (failure),
 * -1 if filename is Null,
 * If text_content is NULL,
 * do not add anything to the file,
 * 1 if file exists,
 * -1 if file doesn't exist or,
 * if you don't have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
