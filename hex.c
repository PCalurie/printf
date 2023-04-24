#include "main.h"

/**
 * print_HEX - prints a hexadecimal number.
 * @val: arguments used
 * Return: count
 */
int print_HEX(va_list val)
{
	int x;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (-1);

	for (x = 0; x < count; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (count);
}
