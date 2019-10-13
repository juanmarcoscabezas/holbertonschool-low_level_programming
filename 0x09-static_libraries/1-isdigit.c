/**
 * _isdigit - check if a character is a digit
 * Description - This function is to check if a charcater is a digit
 * @c: Integer to guess if is an uppercase character
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		if (start == c)
		{
			return (1);
		}
	}
	return (0);
}
