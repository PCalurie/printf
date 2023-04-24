#include "main.h"

/**
 * print_bin - function prints a binary number.
 * @val: arguments passed
 * Return: 1 on success
 */
int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int x, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((a << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - x);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
