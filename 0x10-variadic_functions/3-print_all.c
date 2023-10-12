#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char separator = ',';

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			separator = ' ';

		switch (format[i])
		{
			case 'c':
				printf("%c%c", va_arg(args, int), separator);
				break;
			case 'i':
				printf("%d%c", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%c", (float)va_arg(args, double), separator);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%c", str, separator);
				break;
		}
		i++;

		if (format[i] && strchr("cifs", format[i]))
			printf("%c", separator);
	}

	printf("\n");
	va_end(args);
}

