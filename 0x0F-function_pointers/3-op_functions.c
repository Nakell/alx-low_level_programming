#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two values
 * @a: first value
 * @b: second value
 * Return: sum of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two values
 * @a: first value
 * @b: second value
 * Return: the difference of the value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of the two values
 * @a: first value
 * @b: second value
 * Return: the product of the value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of the two values
 * @a: first value
 * @b: second value
 * Return: the division of hte values
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division
 * @a: first value
 * @b: second value
 * Return: the remainder of the values
 */
int op_mod(int a, int b)
{
	return (a % b);
}

