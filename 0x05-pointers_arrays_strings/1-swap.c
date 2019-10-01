/**
 * swap_int - Swap the value of 2 integers
 * Description: This function swap the value of the parameters
 * @a: First pointer
 * @b: Second pointer
 * Return:
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
