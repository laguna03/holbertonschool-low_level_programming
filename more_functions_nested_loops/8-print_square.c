#include "main.h"
/**
 * print_square - print squares with #
 * @size: is how long print squares
*/
void print_square(int size)
{

int a, b;

if (size <= 0)
{
	_putchar(10);
}
else
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar(10);
}
}
}
