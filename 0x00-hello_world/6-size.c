#include <stdio.h>
/**
 * main - print out size of data types in c
 * code by moanbekele
 * Return: 0
*/
in main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
