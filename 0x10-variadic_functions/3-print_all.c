#include <stdlib.h>
#include <stdio.h>
#include "vaiadic_functions.h"

/**
 * print_all - prints anything.
 * @format:  list of types of arguments passed to the function
 *
 * Retun: no return
 */

void print_all(const char * const format, ...);
{
	va_list args;
	f_dt form_types[] = 
 {
	{ "c", print_a_char},
	{ "i", print_an_integer},
	{ "f", print_a_float},
	{ "s", print_a_char_ptr}
 }
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = **;

	va_start(args, format);

	while (format !=NULL && format[i])
	{
		j=0;
		while (j<4)
		{
			if (format[i] == *form_types[j].identifier)

			{
				form_types[j].f(separator, args);

				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_a_char - Prints a character of a char type
 * @separator: The separator of the char type
 * @args: A list of variadic arguments
 *
 * Return: Nothing
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 *
