#include "main.h"

/**
 * pf_s - deals with %s.
 * If string isn't null, it prints it. Otherwise prints (null)
 * @liz: list of arguments
 *
 * Return: number of characters printed
 */
int pf_s(va_list liz)
{
	int c = 0;
	char *t;

	t = va_arg(liz, char *);
	if (!t)
	{
		write(1, "(null)", _strlen("(null)"));
		c += _strlen("(null)");
	}
	else
	{
		write(1, t, _strlen(t));
		c += _strlen(t);
	}

	return (c);
}
