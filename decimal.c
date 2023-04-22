#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_d - returns an int to signed decimal
* @valist: argument list
* @buffer: values in the list
* @index: the index position
*/
void print_d(va_list lists, char *buffer, int *p_index)
{
	int x, y, num_len;
	char *num_str;

	i = va_arg(lists, int);

	num_len = digits_count(x);
	if (x < 0)
	{
		num_len += 1;
	}
	num_str = malloc(num_len * sizeof(char));
	if (num_str == NULL)
		return;
	istr(num_str, x);
	for (x = *p_index, y = 0; y < num_len; *p_index += 1, x++, y++)
	{
		if (*p_index == 1024)
		{
			write_buffer(buffer, p_index);
			reset_buffer(buffer);
			*p_index = 0;
		}
		buffer[*p_index] = num_str[y];
	}
	free(num_str);
}

