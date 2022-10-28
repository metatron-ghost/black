#include "main.h"

/**
 * binary_to_uint - function to conert binary to decimal
 * @*b: the char to be checked for binary and converted
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(char *b)
{
	unsigned int i, sum = 0, len = 0;
	for (i = 0; b[i] != '\0'; i++)
		len++;
	i = 0;
	len--;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			sum = sum + (pow(2,len));
		else if (b[i] == '0')
			sum = sum + 0;
		else
			return (0);
		len--;
	}
	return (sum);
}
