#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: new dog or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len, len2;

	len = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
