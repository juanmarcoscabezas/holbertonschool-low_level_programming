/**
 * _isupper - check if a character is in uppercase
 * Description - This function is to check if a charcater is in uppercase
 * @c: Integer to guess if is an uppercase character
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	int start;

	for (start = 'A'; start <= 'Z'; start++)
	{
		if (start == c)
		{
			return (1);
		}
	}
	return (0);
}
