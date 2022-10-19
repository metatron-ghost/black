#include "main.h"

/**
 * print_array - Prints the given number of elements.
 *
 * @n: number of elements to be printed
 * @a: the pointer to the array element
 *
 * Return: Void (Nothing)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
