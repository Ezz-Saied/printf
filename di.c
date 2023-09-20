#include "main.h"

/**
 * pf_di - deals with %d and %i.
 * @liz: list of arguments
 *
 * Return: number of characters printed
 */
int pf_di(va_list liz)
{
	char *numbers;
	long int x;
	int j, size, counter = 0;

	numbers = NULL;
	x = va_arg(liz, int);
	numbers = clac_digits(x);
	if (numbers == NULL)
		return (-1);
	size = _strlen(numbers);
	for (j = 0; j < size; j++)
	{
		write(1, (numbers + j), sizeof(char));
		counter++;
	}
	return (counter);

	return (counter);
}
