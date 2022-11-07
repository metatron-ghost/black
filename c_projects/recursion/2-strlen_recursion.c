#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: the string given by main (pointer to)
 *
 * Return: An integer value (the length)
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	
	if (*s != '\0')
		len = 1 + (_strlen_recursion(s + 1));
	else
		return (0);
	return (len);
}
