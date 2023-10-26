#include "main.h"
/**
 * puts2 - Function to print rest char of a s starting with the first one
 * followed by a new line
 * @str: string which char will be printed from.
 * Return: Rest of char from start till new line
 */

void puts2(char *str)

{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
			_putchar(10);
}
