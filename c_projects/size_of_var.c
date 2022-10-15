#include <stdio.h>

/**
 *  Main - Entry point
 *
 *  Description: Program that shows variable sizes
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int *p;
	char *s;

	printf("Size of variable 'char' is: %u bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %u bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %u bytes\n", sizeof(float));
	printf("Size of pointer to int on this machine is: %u bytes\n", sizeof(p));
	printf("Size of pointer to char on this machine is: %u bytes\n", sizeof(s));
	printf("Size of variable 'int n' is: %d bytes\n", sizeof(n));
	
	return (0);
}
