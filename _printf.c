#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * write output to stdout, the standard output stream
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j, len = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		j  = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
			}
			j--;
		}
		_printf(format[i]);
		len++;
		i++;
	}
	va_end(arg);
	return (len);
}
