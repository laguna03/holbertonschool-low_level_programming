#include "main.h"
/**
 * print_rev - print reverse
 * @s: array char
 * Return: Void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (; c > 0; c--)
	{
		s--;
		_putchar(*s);
	}
	_putchar(10);
}
