#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints the arguments given
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
