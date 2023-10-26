#include "main.h"
/**
 * puts_half - function to print half of string followed by a new line.
 * @str: String which half of will be printed
 * Return: half of the string (void)
 */

void puts_half(char *str)
{
	int count = 0;
	int half;

	while (str[count] != '\0')
{
	count++;
}

if ((count % 2) == 0)
{
	half = count / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
}
else
{
	half = (count / 2) + 1;

	while (str[half] != 0)
	{
		_putchar(str[half]);
		half++;
	}
}
_putchar(10);
}
