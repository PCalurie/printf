#include "main.h"

/**
 * print_HEXo - prints a hexadecimal number.
 * @num: arguments used
 * Return: count
 */
int print_HEXo(unsigned int num)
{
	int x;
	int *array;
	int count = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

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
