#include <stdio.h>

/**
 * main - Entry point
 * Description: This function prints the name of the file
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	argc++;
	printf("%s\n", argv[0]);

	return (0);
}
