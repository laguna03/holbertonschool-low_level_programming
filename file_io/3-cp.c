#include "main.h"
/**
 * main - main function
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: number
 */

int main(int argc, char *argv[])

{
	int fd_from, fd_to, count_r, count_w;
	char *file_f = argv[1];
	char *file_t = argv[2];
	char *buff[1024];

	if (argc != 3)
		error_and_exit("cp file_from file_to", NULL, 97);

	fd_from = open(file_f, O_RDONLY);
	if (fd_from == -1 || file_f == NULL)
		error_and_exit("Can't read from file", file_f, 98);

	fd_to = open(file_t, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1 || file_t == NULL)
		error_and_exit("Can't write to", file_t, 99);

	while (1)
	{
		count_r = read(fd_from, buff, 1024);
		if (count_r == 0)
			break;
		if (count_r == -1)
			error_and_exit("Can't read from file", file_f, 98);
		count_w = write(fd_to, buff, count_r);
		if (count_w == -1)
			error_and_exit("Can't write to", file_t, 99);
	}
	if (close(fd_from) == -1)
		error_and_exit("Can't close fd", file_f, 100);
	if (close(fd_to) == -1)
		error_and_exit("Can't close fd", file_t, 100);
	return (0);
}

/**
 * error_and_exit - function to help with errors
 * @message: message to add
 * @filename: filename
 * @exit_code: exit code of the error
 */

void error_and_exit(const char *message, const char *filename, int exit_code)

{
	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: %s\n", message);
		exit(exit_code);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
		exit(exit_code);
	}
}
