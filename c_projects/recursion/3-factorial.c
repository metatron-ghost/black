#include "main.h"

/**
 * factorial - a function that calculates the factorial of a given int
 * @n: the integer given by main
 *
 * Return: factorial int
 */

int factorial(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		res = n * (factorial(n - 1));
	return (res);
}
