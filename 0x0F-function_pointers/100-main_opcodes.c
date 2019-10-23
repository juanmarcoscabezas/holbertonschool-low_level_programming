#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int (*m)(int, char *) = main;
	int i, value;

	value = atoi(argv[1]);

	for (i = 0; i < value; i++)
	{
		/*printf("%d ", *(m + i));*/
	}
	return (0);
}
