#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/**
 * struct Structure_Type - the function to use depending on the acc_format
 *
 * @acc_format: The char
 * @f: The function associated
 */
typedef struct Structure_Type
{
	char acc_format;
	void (*f)(va_list);
} f_type;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void string(va_list);
void charr(va_list);
void intt(va_list);
void floatt(va_list);
#endif
