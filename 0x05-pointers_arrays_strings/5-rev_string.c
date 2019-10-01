/**
 * rev_string - Reverse a string
 * Description: This function reverse a given string
 * @s: Pointer that contains the string
 * Return:
 */
void rev_string(char *s)
{
	int len = 0;
	int start;
	char aux;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (start = 0; start <= len / 2; start++)
	{
		aux = s[start];
		s[start] = s[len - start];
		s[len - start] = aux;
	}
}
