#include "main.h"
/**
 * print_rot13 - prints in ROT13 encryption
 * @args: arguments
 * Return: count
 */
int print_rot13(va_list args)
{
	int i, counter = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			_putchar((s[i] - 'a' + 13) % 26 + 'a');
			counter++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			_putchar((s[i] - 'A' + 13) % 26 + 'A');
			counter++;
		}
		else
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
