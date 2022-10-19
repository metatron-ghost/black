#include "main.h"

/**
 * *_strcpy - pointer to a destination string
 *
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 *
 * Return: Pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
