#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jac Bauer
 * h = hour, m = minutes
 * Return: Always success
 */
void jack_bauer(void)
{
	int h, m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 60) + '0');
		}
	}
}
