#include "variadic_functions.h"

/**
 * print_all - prints any argument passed to the function.
 * @format: string type pointed.
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	int flag, idx = 0;
	va_list suck;
	char *str;

	va_start(suck, format);
	while (format && format[idx])
	{
		flag = 0;
		switch (format[idx])
		{
			case 'c':
				printf("%c", va_arg(suck, int));
				break;
			case 'i':
				printf("%d", va_arg(suck, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(suck, double));
				break;
			case 's':
				str = va_arg(suck, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				flag = 1;
				break;
		}
		if (format[idx + 1] && flag == 0)
			printf(", ");
		idx++;
	}
	printf("\n");
	va_end(suck);
}

