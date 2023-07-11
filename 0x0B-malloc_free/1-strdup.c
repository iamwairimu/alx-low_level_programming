#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory
 * which contains a copy of the string
 * @str: char
 * Return: pointer to duplicate string or NULL if insufficient
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		aaa[j] = str[j];
	return (aaa);
}
