#include <stdio.h>

/**
 * main - entryy point
 *
 * Description: A program that counts the number of arguments given
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		;
	count--;
	printf("%d\n", count);
	return (0);
}
