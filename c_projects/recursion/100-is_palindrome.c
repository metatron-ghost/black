#include "main.h"

/**
 * is_palindrome - function that check a string for palindrome
 * @s: the string given by main
 *
 * Return: int value
 */

int is_palindrome(char *s)
{
	int len, mid, index = 0;

	len = find_len(s);

	if (len == 0)
		return (1);
	else if (len == 1)
		return (0);

	mid = len / 2;
	return (check(s, index, len, mid));
}

/**
 * find_len - finds length of string
 * @s: the string to calculate its length from
 *
 * Return: int value
 */

int find_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (find_len(s + 1)));
}

/**
 * check - checks the elements for equality
 * @j: length of string
 * @m: mid point of string
 *
 * Return: int value
 */

int check(char *s, int index, int len, int mid)
{
	if (s[index] != s[len])
		return (0);
	if (len > mid)
		return (check(s, (index + 1), (len - 1), mid));
	else if (len == mid)
		return (1);
	return (1);
}
