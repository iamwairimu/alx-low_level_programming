#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string digit
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print name of program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}
		/*condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
