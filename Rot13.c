#include "main.h"

/**
 * pf_R - deals with %R - encodes string using rot13
 * @liz: list of arguments
 *
 * Return: number of characters printed
 */
int pf_R(va_list liz)
{
	int c = 0, i = 0;
	char *t;

	t = va_arg(liz, char *);

	if (!t)
		t = "(null)";

	if (t)
	{
		char p, letters[104] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z'};

		while (*t != '\0')
		{
			for (i = 0; i < 104; i++)
			{
				if (*t == letters[i])
				{
					p = letters[i + 13];
					write(1, &p, 1);
					c++;
					break;
				}
			}
			t++;
		}
	}
	return (c);
}
