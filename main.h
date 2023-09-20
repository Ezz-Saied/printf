#ifndef PFH
#define PFH

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct csf - Struct containing conversion specifiers and their
 * corresponding functions
 *
 * @cs: The char representing the conversion specifier
 * @cs_f: The function associated with the conversion specifier
 */
typedef struct csf
{
	char cs;
	int (*cs_f)(va_list liz);
} csf_t;

int _strlen(char *s);
int _printf(const char *format, ...);
int pf_s(va_list liz);
int pf_c(va_list liz);
int pf_r(va_list liz);
int pf_di(va_list liz);
int pf_R(va_list liz);
int _prints(const char *format, va_list liz);
int (*get_csf(char cs))(va_list);
char *clac_digits(long int number);
char *int_to_str(long int num, char *arr, int index_of_last);
int _putchar(char c);

#endif
