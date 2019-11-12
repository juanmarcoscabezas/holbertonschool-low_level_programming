#include "holberton.h"

/**
 * create_file - Creates a file
 * Description: This function creates file
 * @filename: File to create
 * @text_content: String to write in the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
