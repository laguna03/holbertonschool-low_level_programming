#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: filename pointer
 * @text_content: text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int cr, wr;

	if (filename == NULL)
		return (-1);

	cr = open(filename, O_RDWR | O_APPEND);

	if (cr == -1)
		return (-1);

	if (!text_content)
		return (1);

	wr = write(cr, text_content, strlen(text_content));
	if (wr == -1)
	{
		return (-1);
	}
	close(cr);
	return (1);
}
