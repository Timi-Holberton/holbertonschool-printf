#ifndef TEST_MAIN_H
#define TEST_MAIN_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct type_function
{
	char type_cifs;
	int (*function_print)(va_list arguments);
} type_function;

int _putchar(char c);
int print_char(va_list arguments);
int print_string(va_list arguments);
int _printf(const char *format, ...);

#endif /* TEST_MAIN_H */
