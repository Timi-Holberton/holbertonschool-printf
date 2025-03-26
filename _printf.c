#include "main.h"
/**
 * _printf - Fonction qui copie la fonction printf
 *@format: tableau de specifiers
 * Return: 0 = ok; -1 = faux
 */
int _printf(const char * const format, ...)
{
	int i = 0, j, total_char = 0;
	va_list arguments;

	type_function type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(arguments, format);

	if (!format || format[i] == '\0')
		return (-1);

	while (format && format[i])
	{
		total_char = 0;

		if (format[i] == '%')
		{
			i++;
			j = 0;

			while (type[j].type_cifs != '\0')
			{
				if (format[i] == type[j].type_cifs)
				{
					total_char += type[j].function_print(arguments);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
		i++;
	}
	va_end(arguments);
	return (total_char);
}
