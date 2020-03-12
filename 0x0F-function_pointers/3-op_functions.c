#include "3-calc.h"

/**
 * op_add - Aadd two int
 * @a: argv[1].
 * @b: argv[3].
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Sub two int
 * @a: argv[1].
 * @b: argv[3].
 * Return: Sub.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two int
 * @a: argv[1]
 * @b: argv[3]
 * Return: Mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divided two int
 * @a: argv[1]
 * @b: argv[3]
 * Return: Div
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Mod of two int
 * @a: argv[1].
 * @b: argv[3].
 * Return: mod
 */

int op_mod(int a, int b)
{
	return (a % b);
}
