#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints
 * Description: This function reads a text file and prints it
 * to the POSIX standart output
 * @filename: File to print
 * @letters: Number of letters it should read and print
 * Return: The number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write the expect amout of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, w;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);

	if (r < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	*(buffer + r) = '\0';

	w = write(1, buffer, r);

	if (w < 0 || w != r)
		return (0);
	free(buffer);
	close(fd);
	return (r);
}
