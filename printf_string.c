#include "main.h"
/**
 * printf_string - prints a string
 * @val: arguments
 * Return: length of the string
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;
/* set memory for the string */
	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len); /* length of the str */
	}
}
