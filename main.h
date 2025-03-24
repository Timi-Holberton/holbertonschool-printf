#ifndef MAIN_H
#define MAIN_H

#include "stdarg.h"


typedef struct type_function
{
	char type;
	void (*function_print)(va_list arguments);
} type_function;

int _putchar(char c);
void print_char(va_list arguments);
void print_string(va_list arguments);

void (*function_tabtype(char *s))(int);

#endif /* MAIN_H */
