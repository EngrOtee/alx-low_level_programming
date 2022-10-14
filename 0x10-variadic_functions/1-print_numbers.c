#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n:  number of integers passed to the function
 *
 *
 * Return: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va-start(args, n);
		while (i < n)
		{
			printf("%d", va_arg(args, int));
		if (i != n-1 && seprator !=NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
}
printf("\n");

}
