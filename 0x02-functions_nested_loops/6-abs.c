#include "main.h"
/**
 * _abs - compute absolute value
 * @i: input number as integer
 * Return: 0 (success)
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
