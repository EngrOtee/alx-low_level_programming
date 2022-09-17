#include "main.h"
/**
 * times_table - function that prints then nine times table, starting with zero
 * rw = row, col = column, d =digits
 * Return: Always success
 */
void times_tables(void)
{
	int rw, col, d;
	for (rw = 0; rw <=9; rw++)
	{
		-putchar('0');
		-putchar(',');
		-putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			d = (rw * col);

			if ((d / 10) > 0)
			{
			_putchar((d / 10) + '0');
			}

			else 
			{
				-putchar(' ');
			}
		}
	}
}
