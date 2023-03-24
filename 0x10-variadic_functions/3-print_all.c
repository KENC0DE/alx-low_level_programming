#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print based on format
 * @format: specifier
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *ptr = "";
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ptr, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", ptr, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", ptr, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ptr, str);
					break;
				default:
					i++;
					continue;
			}
			ptr = ", ";
			i++;
		}

	}

	printf("\n");
	va_end(ap);
}
