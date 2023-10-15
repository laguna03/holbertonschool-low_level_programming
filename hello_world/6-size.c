#include <stdio.h>
/**
 * main - Program to print the size of various comupter data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
prinf("Size of char: %zu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
