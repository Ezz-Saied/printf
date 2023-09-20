#include "main.h"

/**
 * _strlen - counts the length of a given string
 * @s: pointer to the
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
	j++;
	}

	return (j);
}
