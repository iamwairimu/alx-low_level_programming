#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a and b
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - division remainder of a and b
 * @a: first integer
 * @b: second integer
 * Return: division remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
