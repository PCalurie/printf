#include "main.h"
/**
 * _printf - custom printf implementation
 * @format: format string
 * Return: number of characters printed (excluding null byte), or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, len = 0;
	convert_match m[] = {
		{"%s", print_string}, {" %c", print_char}, {"%%", print_percent},
		{"%i", print_int}, {"%d", print_decimal}, {"%r", print_rev},
		{"%R", print_rot13}, {"%b", print_binary}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer},
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i]; ++i)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 14; ++j)
			{
				if (compare_id(format + i, m[j].id))
				{
					len += m[j].f(args);
					i += _strlen(m[j].id) - 1;
					break;
				}
			}
			if (j == 14)
				len += _putchar(format[i]);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(args);

	return (format && format[0] ? len : -1);
}
/**
 * compare_id - compares id with a string in format starting at format
 * @format: format string
 * @id: string to compare
 * Return: 1 if strings match, else 0
 */
int compare_id(const char *format, const char *id)
{
	int i;

	for (i = 0; id[i] != '\0'; i++)
	{
		if (format[i] != id[i])
			return (0);
	}

	return (1);
}
/**
 * _strlen - gets the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
