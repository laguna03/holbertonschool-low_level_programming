#include "main.h"
/**
 *create_file - a function that creates a file
 *@filename: points to the name of a file
 *@text_content: points to the text to copy in the file
 *Return: 1 on success or -1 on fail
 */

int create_file(const char *filename, char *text_content)

{
/*Declarations*/
int fd, len;

/*GET SIZE OF TEXT_CONTENT*/
/*allocate ner space*/
/*check if malloc failed and the file name*/
if (filename == NULL)
return (-1);
/*open new file*/
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
/*Verify if text_content NULL*/
if (fd == -1)
return (-1);
/*write to the file*/
if (text_content != NULL)
{
len = strlen(text_content);
write(fd, text_content, len);
close(fd);
}
return (1);
} /*end function*/
