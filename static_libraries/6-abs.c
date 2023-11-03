#include "main.h"
/**
 * _abs - Computes thge absolute value of an integer.
 * @c: The number to be computed
 * Return: Absolute value of number of zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abd_val;

		abd_val = c * -1;
		return (abd_val);
	}
	return (c);
}
