#include "main.h"

/**
 * pf_c - deals with %c.If char isn't null, it prints it
 * @liz: list of arguments
 *
 * Return: number of characters printed
 */
int pf_c(va_list liz)
{
	int c = 0;
	char tt = va_arg(liz, int);

	write(1, &tt, 1);
	c += 1;

	return (c);
}
