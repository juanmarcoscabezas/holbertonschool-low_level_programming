#include "holberton.h"

/**
 * error_on_read - Handling errors
 * Description: Function to handle read error
 * @filename: File with error
 * Return:
 */
void error_on_read(char *filename)
{
	dprintf(2, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * error_on_write - Handling errors
 * Description: Function to handle read error
 * @filename: File with error
 * Return:
 */
void error_on_write(char *filename)
{
	dprintf(2, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_on_close - Handling errors
 * Description: Function to handle read error
 * @filename: File with error
 * Return:
 */
void error_on_close(char *filename)
{
	dprintf(2, "Error: Can't close fd %s\n", filename);
	exit(100);
}

/**
 * main - Entry point
 * Description: This program copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: On success 0, -1 otherwise
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from, write_to, close_from, close_to;
	char buffer[1024];
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Opening file_from */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_on_read(file_from);
	/* Opening file_to */
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_on_write(file_to);
	/* Reading file_from & writing on file_to*/
	while ((read_from = read(fd_from, buffer, 1024)) > 0) {
		write_to = write(fd_to, buffer, read_from);
		if (write_to == -1 || read_from != write_to)
			error_on_write(file_to);
	}
	if (read_from == -1)
		error_on_read(file_from);
	/* Close file_from */
	close_from = close(fd_from);
	if (close_from == -1)
		error_on_close(file_from);
	/* Close file_to */
	close_to = close(fd_to);
	if (close_to == -1)
		error_on_close(file_to);
	return (0);
}
