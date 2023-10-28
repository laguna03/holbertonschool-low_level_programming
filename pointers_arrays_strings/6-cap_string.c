#include "main.h"
#include <string.h>
/**
 * cap_string - function capitalize first letter
 * @a: array
 * Return: A
*/
char *cap_string(char *a)
{
/**int b[13] = {' ', ';', '.', '!', '?', '"', '(', ')', '{', '}'};**/
char b[] = ",;.!?(){}\n\t\" ";
int i = 0;
int j = 0;

int flag = 0;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (a[i - 1] == b[j])
			{
				flag = 1;
				break;
			}
		}
		if (((i == 0) || (flag == 1)) && ((a[i] > 96) && (a[i] < 123)))
		{
			a[i] = a[i] - 32;
			flag = 0;
		}
		else if ((flag == 1) && ((a[i] > 64) && (a[i] < 91)))
		{
			flag = 0;
		}
		else if ((flag == 1) && ((a[i] > 47) && (a[i] < 58)))
		{
			flag = 0;
		}
	}

	return (a);
}
