#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_str - string specifier
* @lists: list
* @buffer: buffer
* @p_index: pointer to index
*
* Return: void
*/
void print_str(va_list lists, char *buffer, int *p_index)
{
	int x, y;
	char *str;

	str = va_arg(lists, char*);
	if (str == NULL)
		str = "(null)";
	for (x = *p_index, y = 0; str[y] != '\0';  *p_index += 1, x++, y++)
	{
		if (*p_index == 1024)
		{
			write_buffer(buffer, p_index);
			reset_buffer(buffer);
			*p_index = 0;
		}
		buffer[*p_index] = str[y];
	}
}
/**
* print_c - char specificer
* @lists: list
* @buffer: buffer to use
* @p_index: pointer to the index
*
* Return: void
*/
void print_c(va_list lists, char *buffer, int *p_index)
{
	char c;

	c = (char)va_arg(lists, int);
	if (*p_index == 1024)
	{
		write_buffer(buffer, p_index);
		reset_buffer(buffer);
		*p_index = 0;
	}
	buffer[*p_index] = c;
	*p_index += 1;
}
