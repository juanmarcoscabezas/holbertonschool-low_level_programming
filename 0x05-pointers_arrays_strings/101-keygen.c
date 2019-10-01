#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int start = 0, pow = 1;
	int n = 0;
	srand(time(0));

	while (start < 10)
	{
		n = n + (rand() - RAND_MAX / 2) * pow;
		pow = pow * 10;
		start++;
	}
	return (n);
}
