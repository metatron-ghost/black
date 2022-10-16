#include "main.h"

/**
 * swap_int - Function that swaps 2 given integers using pointers
 *
 * @a: first integer received from main
 * @b: second integer received from main
 *
 * Return: Void (Nothing)
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
