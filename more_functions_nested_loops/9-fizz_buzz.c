#include <stdio.h>
/**
 * main - function of print fizzbuzz test
 * Return: Always return 0
*/
int main(void)
{
char count;

for (count = 1; count <= 100; count++)
{
	if ((count % 5 == 0) && (count % 3 == 0))
	{
		printf("FizzBuzz");
	}
	else if (count % 3 == 0)
	{
		printf("Fizz");
	}
	else if (count % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", count);
	}
if (count <= 99)
{
putchar(' ');
}
}
printf("\n");
return (0);
}
