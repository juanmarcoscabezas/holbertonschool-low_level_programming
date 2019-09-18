#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * prints a string
 *
 * Return: Always 00 (Success)
 */
int main(void)
{
	char text[50];

	strcpy(text, "\"Programming is like building a multilingual puzzle");
	puts(text);
	return (0);
}
