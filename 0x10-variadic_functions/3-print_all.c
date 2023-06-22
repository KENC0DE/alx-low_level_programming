#include "variadic_functions.h"

/**
 * print_all - prints any argument passed to the function.
 * @format: string type pointed.
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	int k, flag, idx = 0;
	va_list suck;
	char *str;

	while (format[idx])
		idx++;
	k = 0;
	va_start(suck, format);
	while (k < idx)
	{
		flag = 0;
		switch (format[k])
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
		if (k + 1 != idx && flag == 0)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(suck);
}

