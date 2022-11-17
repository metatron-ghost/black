#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * Description: A program that calculates the minimum coins required for change
 * @argc: Number of arguments given (including program name)
 * @argv: pointer to the strings of arguments given
 *
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int count = 0, amount;

	if (argc != 2)
	{
		printf("Error.\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		while (amount >= 25)
		{
			count++;
			amount -= 25;
		}
		while (amount >= 10)
		{
			count++;
			amount -= 10;
		}
		while (amount >= 5)
		{
			count++;
			amount -= 5;
		}
		while (amount >= 2)
		{
			count++;
			amount -= 2;
		}
		while (amount >= 1)
		{
			count++;
			amount -= 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
