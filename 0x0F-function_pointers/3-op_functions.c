#include "3-calc.h"

/**
 * op_add - The sum of two numbers
 * @a:the 1st number
 * @b:the 2nd number
 *
 * Return:The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - The substraction of two numbers
 * @a:The 1st number
 * @b:The 2nd number
 *
 * Return: The Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The multiplication of two numbers
 * @a:The 1st number
 * @b: The 2nd number
 *
 * Return: The multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - The division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The remainder of the division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
