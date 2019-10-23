/**
 * print_name - Prints a name
 * Description: This function prints a given name
 * @name: Given name to print
 * @f: Given function that prints in a format
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
