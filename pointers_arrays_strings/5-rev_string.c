#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
int len = 0;
int i;
char temp;

while (s[len] != '\0')
{
	len++;
}
for (i = 0; i < (len / 2); i++)
{
	temp = s[1];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
}
}
