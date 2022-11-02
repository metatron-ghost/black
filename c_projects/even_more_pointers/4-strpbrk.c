#include "main.h"

/**
 * _strpbrk - function that search the first occurance of a character
 * 		from a given string in another given string.
 * @s: the source string
 * @accept: the searched character string
 * Return: Pointer to the first occurance otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
				break;
			}
		}
		j = 0;
	}
	return ('\0');
}
