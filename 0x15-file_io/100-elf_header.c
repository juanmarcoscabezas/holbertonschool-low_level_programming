#include <elf.h>
#include "holberton.h"

/**
 * main - Entry point
 * Description: Function that displays the information contained
 * in the ELF header at the start of an ELF file
 * @argc: Number of params
 * @argv: Params
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	/* Elf64_Ehdr header; */
	int f_des, f_read, f_write;
	char buffer[1024];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		exit(98);
	}

	f_des = open(argv[1], O_RDONLY);

	if (f_des == -1)
	{
		dprintf(STDERR_FILENO, "Error on open file");
		exit(98);
	}
	f_read = read(f_des, buffer, 1024);

	if (f_read == -1)
	{
		dprintf(STDERR_FILENO, "Error on read file");
		exit(98);
	}

	f_write = write(STDOUT_FILENO, buffer, 1024);
	if (f_write == -1)
	{
		dprintf(STDERR_FILENO, "Error on write file");
		exit(98);
	}

	return (0);
}
