#include "main.h"

/**
 * _prints - Handles string, %s, &c, %% in format
 * @format: pointer to the format string composed of 0 or more directives
 * @liz: list of arguments to be printed
 *
 * Return: total number of characters printed or -1 for fucntion failure
 */
int _prints(const char *format, va_list liz)
{
	int i = 0, count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
				return (-1);

			if (format[i + 1] == '%')
			{
				write(1, &format[i], 1);
				i += 2;
				count++;
			}
			else
			{
				if (get_csf(format[i + 1]))
				{
					count += get_csf(format[i + 1])(liz);
					i += 2;
				}
				else
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					i += 2;
					count += 2;
				}
			}
		}
		else
		{
			write(1, &format[i], 1), count++, i++;
		}
	}
	return (count);
}
