#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a new line.
 * @separator - string to be printed between numbers
 * @n: number of functions passed to the function
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	ba_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("5d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
