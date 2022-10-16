#include "main.h"

/**
 * rev_string - Function that reverses a given string
 *
 * @s: the string to be reversed
 *
 * Return: Void (Nothing)
 */

void rev_string(char *s)
{
	int i, mid;
	int j = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;

	mid = i / 2;
	
	if ((i % 2) == 1)
	{
		for (i = (i - 1); i > mid; i--)
		{
			tmp = s[j];
			s[j] = s[i];
			s[i] = tmp;
			j++;
		}
	}
	else
	{
		for (i = (i - 1); i >= mid; i--)
		{
			tmp = s[j];
			s[j] = s[i];
			s[i] = tmp;
			j++;
		}
	}
}
