#include "main.h"
/**
 * print_sign - returns 1 if n is +, - if n < 0 otherwise 0.
 * @n: interger to be tested
 * Return: 1, -1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
