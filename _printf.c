#include "main.h"

/**
 * _printf - if exists, prints text, s, c, %
 * @format: pointer to the format string composed of 0 or more directives
 * @...: arguments to be printed
 *
 * Return: number of characters printed or -1 for failure
 */
int _printf(const char *format, ...)
{
	unsigned long int count = 0;
	va_list liz;

	if (!format)
		return (-1);

	va_start(liz, format);

	if (format[0] != '\0')
	count = _prints(format, liz);

	va_end(liz);

	return (count);
}
