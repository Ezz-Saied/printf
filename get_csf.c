#include "main.h"

/**
 * get_csf - selects the correct function for each conversion specifier
 * @cs: char representing conversion specifier
 *
 * Return: pointer to the function that corresponds to the passed character
 * representing the conversion specifier
 */
int (*get_csf(char cs))(va_list)
{
	int i;
	csf_t cs_array[] = {
		{'c', pf_c},
		{'s', pf_s},
		{'r', pf_r},
		{'d', pf_di},
		{'i', pf_di},
		{'R', pf_R},
		{'0', NULL}};

	for (i = 0; cs_array[i].cs_f != NULL; i++)
		if (cs_array[i].cs == cs)
			return (cs_array[i].cs_f);

	return (NULL);
}
