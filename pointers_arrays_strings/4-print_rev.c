#include "main.h"
/**
 * print_rev - print reverse
 * @s: array char
 * Return: Void
 */
void print_rev(char *s)
{
int c = 0;

c = 0;
while (*s != '\0')
{
c++;
s++;
}
while (c != 0)
{
s--;
_putchar(*s);
c--;
}
_putchar(10);
}
