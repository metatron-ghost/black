#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 *
 * @s: String to be printed given by main
 *
 * Return: Void (Nothing)
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for ( i = (i + 0); i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
