#include "main.h"

/**
 * verify_type - search list of types for a matching format
 * @format: a character string composed of zero or more directives
 * Desc: refers to struct for valist database of formats
 * Return: ptr to right function if successfull or NULL on failure
 */

static int (*verify_type(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Desc: produces output according to a format using _putchar
 * Return: number of characters printed or -1 if there is an error
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		f = verify_type(&format[i + 1]);
		if (f != NULL)
		{
			j += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		j++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (j);
}
