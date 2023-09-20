#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
* clac_digits - display int
* @number: first operand
*
* Return: int
*/
char *clac_digits(long int number)
{
	int n_digits, copy_of_number;
	char *arr_of_digits;

	copy_of_number = number;
	n_digits = 0;
	while (copy_of_number != 0)
	{
		n_digits++;
		copy_of_number = copy_of_number / 10;
	}
	if (number < 0)
	n_digits++;
	arr_of_digits = (char *)malloc(sizeof(char) * n_digits);
	if (arr_of_digits == NULL)
		return (NULL);
	int_to_str(number, arr_of_digits, n_digits - 1);
	return (arr_of_digits);
}
