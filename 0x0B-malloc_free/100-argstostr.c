#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program
 * @ac: input
 * @av: pointer
 * Return: pointer to new string or NULL if fail
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, a = 0, s = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[a] = av[i][j];
			a++;
		}
		if (str[a] == '\0')
		{
			str[a++] = '\n';
		}
	}
	return (str);
}
