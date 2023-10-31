#include "main.h"
#include <unistd.h>
/**
 * _puts_recursion - Function to print a string followed by new line
 * @s: array
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
}
