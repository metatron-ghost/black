#include "main.h"

/**
 * *_strcat - function to copy one string ino another
 *
 * @*dest: pointer to destination string
 * @*src: pointer to source
 *
 * Return: Pointer to joined string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
