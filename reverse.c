#include "holberton.h"
/**
 * format_r - reverse a string passed in
 * @lists: argument passed in
 * @buffer: values stored
 * @p_index: returns pointer to index
 */
void format_r(va_list lists, char *buffer, int *p_index)
{
	int x, strlen;
	char *s;

	s = va_arg(lists, char *);
	strlen = _strlen(s) - 1;

	for (x = strlen; x >= 0; x--, *p_index += 1)
	{
		buffer[*p_index] = s[x];
	}
}
