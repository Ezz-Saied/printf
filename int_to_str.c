#include "main.h"
/**
* int_to_str - converts integers to string
* @num: first operand
* @arr_of_digits: second operand
* @index_of_last: third operand
*
* Return: pointer
*/
char *int_to_str(long int num, char *arr_of_digits, int index_of_last)
{
	int i, digit;

	i = 0;
	if (num < 0)
	{
		arr_of_digits[i] = 45;
		num = num * -1;
	}
	if (num == 0)
	{
		arr_of_digits[i] = 48;
		return (arr_of_digits);
	}
	while (num != 0)
	{
		digit = num % 10;
		arr_of_digits[index_of_last] = (48 + digit);
		num = num / 10;
		index_of_last--;
	}
	return (arr_of_digits);
}
