#include "main.h"
/**
 * print_r - reverse a string passed in
 * @lists: argument passed in
 * @buffer: values stored
 * @p_index: returns pointer to index
 */
void print_r(va_list lists, char *buffer, int *p_index)
{
	int x, strlen;
	char *str;

	str = va_arg(lists, char *);
	strlen = str_len(str) - 1;

	for (x = strlen; x >= 0; x--, *p_index += 1)
	{
		buffer[*p_index] = str[x];
	}
}
