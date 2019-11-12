#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * _putchar - putchar function
 * Description: This function prints characters
 * @c: is the entry character that has to be printed
 * Return: void
 */
int _putchar(char c);


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
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a file
 * Description: This function creates file
 * @filename: File to create
 * @text_content: String to write in the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content);





#endif
