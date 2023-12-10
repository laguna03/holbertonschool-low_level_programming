#include "main.h"
/**
 *append_text_to_file - append text to a file
 *@filename: points to the file name
 *@text_content: points to the txt content
 *Return: ! if success -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)

{
/*Declarations*/
int fd, len;
/*Check if the file exists*/
if (access(filename, F_OK) == -1)
return (-1);
/*check filename for content*/
if (filename == NULL)
return (-1);
/*Open the file*/
fd = open(filename, O_WRONLY | O_APPEND, 0664);
if (fd == -1)
return (-1);
/*check if tex_content is NULL or has data*/
if (text_content == NULL)
{
close(fd); /*if NULL, jsut close the file*/
return (1);
} /*end if*/
len = strlen(text_content);
write(fd, text_content, len);
close(fd);
return (1);
} /*end function*/
