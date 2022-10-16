#include "main.h"

/**
 * _puts - Function that prints a string to stdio
 *
 * @str: String to be printed given by main
 *
 * Return: Void (Nothing)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
}
