#include "main.h"
/**
 * create_file - create a file
 * @filename: file name
 * @text_content: li text content
 * Return: 1 if sucess or -1 if an error ocurred
*/
int create_file(const char *filename, char *text_content)
{
	int cr, wr;

	if (filename == NULL)
		return (-1);

	cr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (cr == -1)
		return (-1);

	if (!text_content)
		return (1);

	wr = write(cr, text_content, strlen(text_content));
	if (wr == -1)
	{
		close(cr);
		return (-1);
	}
	close(cr);
	return (1);
}
