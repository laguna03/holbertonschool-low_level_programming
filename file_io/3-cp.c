#include "main.h"
/**
 * main - Copies the content of a file to another file
 * @argc: int
 * @argv: pointer argv
 * Return: Return 0 if successful, otherwise return error code
 */
int main(int argc, char *argv[])
{
char *buffer;
int cl1, cl2, fdir_from, fdir_to, rd;

buffer = malloc(1024);
if (!buffer)
		return (-1);
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
fdir_from = open(argv[1], O_RDONLY, 0664);
if (fdir_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
fdir_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((rd = read(fdir_from, buffer, 1024)) > 0)
{
rd = read(fdir_from, buffer, 1024);
if (fdir_to < 0 || (write(fdir_to, buffer, rd) != rd))
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
}
if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
cl1 = close(fdir_from);
if (cl1 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdir_from), exit(100);
}
cl2 = close(fdir_to);
if (cl2 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdir_to), exit(100);
}
return (0);
}
