#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int b = 0, c = 0, len1 = 0, len2 = 0;
	char *s;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (b < len1)
	{
		s[b] = s1[b];
		b++;
	}
	while (n < len2 && b < (len1 + n))
		s[b++] = s2[c++];
	while (n >= len2 && b < (len1 + len2))
		s[b++] = s2[c++];
	s[b] = '\0';
	return (s);
}
