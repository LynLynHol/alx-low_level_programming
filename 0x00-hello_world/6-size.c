#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu bytes(s)\n", (unsigned int)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}


