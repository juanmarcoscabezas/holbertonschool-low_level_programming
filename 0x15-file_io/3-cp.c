#include "holberton.h"

/**
 * _strlen - Return the len of a string
 * Description: This function shows the length of a given string
 * @s: Pointer that contains the string
 * Return: @s len
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * create_file - Creates a file
 * Description: This function creates file
 * @filename: File to create
 * @text_content: String to write in the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, c;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (text_content)
		w = write(fd, text_content, _strlen(text_content));

	if (w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	c = close(fd);

	if (c != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", c);
		exit(100);
	}
	return (fd);
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
	int file_from, file_to, r, c;
	void *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(1024);
	if (!buffer)
		return (0);
	r = read(file_from, buffer, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = create_file(argv[2], buffer);
	c = close(file_from);
	if (c != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", c);
		exit(100);
	}
	file_to++;
	return (0);
}
