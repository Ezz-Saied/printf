#include "main.h"

/**
 * pf_r - for %r - reverses string.
 * If string isn't null, it prints it reversed.
 * @liz: list of arguments
 *
 * Return: number of characters printed
 */
int pf_r(va_list liz)
{
	int c = 0, slen = 0;
	char *t;

	t = va_arg(liz, char *);
	if (!t || t[0] == '\0')
		return (0);

	for (slen = _strlen(t) - 1; slen >= 0; slen--)
		c += write(1, &t[slen], 1);

	return (c);
}
