#!/bin/bash
#include "main.h"
/**
 * _puts - function to print an array of characters(a string) to the stdout
 * ending with a new line.
 * @str: array character.
 * Return: Void
 */
void _puts(char *str)

{
	int  count  = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar(10);
}
