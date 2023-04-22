#include "main.h"
/**
* _printf - prints any format based on its specifier
* @format: format specifier
* Return: pointer index
*/
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
	char buffer[1024];
	int x, y = 0, a = 0, *p_index = &a;
	va_list lists;

	vtype_t spec[] = {
		{'c', print_char}, {'d', print_d}, {'s', print_str}, {'i', print_i},
		{'u', print_u}, {'%', print_perc}, {'x', print_h}, {'X', print_ch},
		{'o', print_o}, {'b', print_b}, {'p', print_p}, {'r', print_r},
		{'R', print_R}, {'\0', NULL}
	};
	if (!format)
		return (-1);
	va_start(lists, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		for (; format[x] != '%' && format[x] != '\0'; *p_index += 1, x++)
		{
			if (*p_index == 1024)
			{	write_buffer(buffer, p_index);
				reset_buffer(buffer);
				*p_index = 0;
			}
			buffer[*p_index] = format[x];
		}
			if (format[x] == '\0')
				break;
			if (format[x] == '%')
			{
				x++;

				for (y = 0; spec[y].tp != '\0'; y++)
				{
					if (format[x] == spec[y].tp)
					{
						spec[y].f(lists, buffer, p_index);
						break;
					}
				}
			}
	}
	va_end(lists);
	buffer[*p_index] = '\0';
	write_buffer(buffer, p_index);
	return (*p_index);
}
