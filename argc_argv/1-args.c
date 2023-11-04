#include "main.h"
#include <stdio.h>

/**
 * main - number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
