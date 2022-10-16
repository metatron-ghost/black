#include "main.h"

/**
 * _strlen - Function that calculates string length
 *
 * @s: the string given by main
 *
 * Return: An integer value 
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
