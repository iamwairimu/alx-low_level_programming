#include "main.h"
/**
 * _abs - compute abcolute value
 * @n: input number as integer
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
