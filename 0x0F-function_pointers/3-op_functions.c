#include "3-calc.h"
/**
 * op_add - return the sum of two numbers
 * @a: intiger
 * @b: intiger
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two numbers.
 * @a: intiger
 * @b: intiger
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/*
 * op_mul - returns product of two numbers
 * @a: intiger
 * @b: intiger
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of 2 numbers.
 * @a: intiger
 * @b: intiger
 *
 * Return: difference
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a/b);
}
/**
 * opt_mod - returns the number of 
 * @a: intiger
 * @b: intiger
 *
 * Return: remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n"0);
		exit(100);
	}
	return (a % b);
}
