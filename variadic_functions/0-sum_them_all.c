#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - micha is love
 * @n: number of arguments
 * Return: Sum all arguments
*/
int sum_them_all(const unsigned int n, ...)
{

va_list ar;
unsigned int sum;
unsigned int i;
sum = 0;

va_start(ar, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(ar, int);
	}
va_end(ar);

return (sum);
}
