#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: variable
 * @b: variable fro constant
 * @n: bytes of the memory area pointed by s
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
