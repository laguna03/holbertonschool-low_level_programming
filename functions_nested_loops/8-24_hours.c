#include "main.h"
/**
 *  *  * jack_bauer - lalala
 *    *    * Return: last digit of r
*/
void jack_bauer(void)
{
int num1, num2;
for (num1 = 0; num1 <= 23; num1++)
{
	for (num2 = 0; num2 < 60; num2++)
	{
		_putchar((num1 / 10) + '0');
		_putchar((num1 % 10) + '0');
		_putchar(':');
		_putchar((num2 / 10) + '0');
		_putchar((num2 % 10) + '0');
		_putchar(10);
	}
}
}
